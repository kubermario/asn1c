/*
 * Copyright (c) 2017 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */
#include <asn_internal.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <errno.h>

asn_dec_rval_t
OPEN_TYPE_oer_get(const asn_codec_ctx_t *opt_codec_ctx,
                  const asn_TYPE_descriptor_t *td, void *sptr,
                  asn_TYPE_member_t *elm, const void *ptr, size_t size) {
    asn_type_selector_result_t selected;
    void *memb_ptr;   /* Pointer to the member */
    void **memb_ptr2; /* Pointer to that pointer */
    void *inner_value;
    asn_dec_rval_t rv;
    size_t ot_ret;


    if(!(elm->flags & ATF_OPEN_TYPE)) {
        ASN__DECODE_FAILED;
    }

    if(!elm->type_selector) {
        ASN_DEBUG("Type selector is not defined for Open Type %s->%s->%s",
                  td->name, elm->name, elm->type->name);
        ASN__DECODE_FAILED;
    }

    selected = elm->type_selector(td, sptr);
    if(!selected.presence_index) {
        ASN__DECODE_FAILED;
    }

    /* Fetch the pointer to this member */
    if(elm->flags & ATF_POINTER) {
        memb_ptr2 = (void **)((char *)sptr + elm->memb_offset);
    } else {
        memb_ptr = (char *)sptr + elm->memb_offset;
        memb_ptr2 = &memb_ptr;
    }
    if(*memb_ptr2 != NULL) {
        /* Make sure we reset the structure first before encoding */
        if(CHOICE_variant_set_presence(elm->type, *memb_ptr2, 0) != 0) {
            ASN__DECODE_FAILED;
        }
    }

    inner_value =
        (char *)*memb_ptr2
        + elm->type->elements[selected.presence_index - 1].memb_offset;

    ot_ret = oer_open_type_get(opt_codec_ctx, selected.type_descriptor, NULL,
                               &inner_value, ptr, size);
    switch(ot_ret) {
    default:
        if(CHOICE_variant_set_presence(elm->type, *memb_ptr2,
                                       selected.presence_index)
           == 0) {
            rv.code = RC_OK;
            rv.consumed = ot_ret;
            return rv;
        } else {
            /* Oh, now a full-blown failure failure */
        }
        /* Fall through */
    case -1:
        rv.code = RC_FAIL;
        rv.consumed = ot_ret;
        break;
    case 0:
        rv.code = RC_WMORE;
        rv.consumed = 0;
        break;
    }

    if(*memb_ptr2) {
        const asn_CHOICE_specifics_t *specs =
            selected.type_descriptor->specifics;
        if(elm->flags & ATF_POINTER) {
            ASN_STRUCT_FREE(*selected.type_descriptor, inner_value);
            *memb_ptr2 = NULL;
        } else {
            ASN_STRUCT_FREE_CONTENTS_ONLY(*selected.type_descriptor,
                                          inner_value);
            memset(*memb_ptr2, 0, specs->struct_size);
        }
    }
    return rv;
}

asn_dec_rval_t
OPEN_TYPE_oer_get_element(const asn_codec_ctx_t *opt_codec_ctx,
                          const asn_TYPE_descriptor_t *list_type,
                          const void *list, const asn_TYPE_member_t *elm,
                          void **element_ptr, const void *ptr, size_t size) {
    const asn_CHOICE_specifics_t *cspecs;
    asn_type_selector_result_t selected;
    void *inner_value;
    asn_dec_rval_t rv = {RC_OK, 0};
    ssize_t ot_ret;

    if(!(elm->flags & ATF_OPEN_TYPE) || !elm->type_selector) {
        ASN__DECODE_FAILED;
    }
    selected = elm->type_selector(list_type, list);
    if(!selected.presence_index
       || selected.presence_index > elm->type->elements_count) {
        ASN__DECODE_FAILED;
    }
    cspecs = (const asn_CHOICE_specifics_t *)elm->type->specifics;
    if(!*element_ptr) {
        *element_ptr = CALLOC(1, cspecs->struct_size);
        if(!*element_ptr) ASN__DECODE_FAILED;
    }

    inner_value = (char *)*element_ptr
                  + elm->type->elements[selected.presence_index - 1].memb_offset;
    ot_ret = oer_open_type_get(opt_codec_ctx, selected.type_descriptor, NULL,
                               &inner_value, ptr, size);
    if(ot_ret == 0) {
        rv.code = RC_WMORE;
    } else if(ot_ret < 0) {
        rv.code = RC_FAIL;
    } else if(CHOICE_variant_set_presence(elm->type, *element_ptr,
                                          selected.presence_index) != 0) {
        rv.code = RC_FAIL;
    } else {
        rv.consumed = ot_ret;
    }
    return rv;
}

/*
 * The value of an open type, in OER: the encoding of the selected alternative,
 * wrapped as an open type (length determinant + octets, ITU-T X.696 30).
 */
asn_enc_rval_t
OPEN_TYPE_encode_oer(const asn_TYPE_descriptor_t *td,
                     const asn_oer_constraints_t *constraints,
                     const void *sptr, asn_app_consume_bytes_f *cb,
                     void *app_key) {
    const asn_TYPE_member_t *elm;
    const void *memb_ptr;
    asn_enc_rval_t er = {0, td, sptr};
    unsigned present;
    ssize_t written;

    (void)constraints;

    present = CHOICE_variant_get_presence(td, sptr);
    if(present == 0 || present > td->elements_count) ASN__ENCODE_FAILED;
    elm = &td->elements[present - 1];
    if(elm->flags & ATF_POINTER) {
        memb_ptr = *(const void *const *)((const char *)sptr + elm->memb_offset);
        if(!memb_ptr) ASN__ENCODE_FAILED;
    } else {
        memb_ptr = (const char *)sptr + elm->memb_offset;
    }

    written = oer_open_type_put(elm->type, NULL, memb_ptr, cb, app_key);
    if(written < 0) ASN__ENCODE_FAILED;
    er.encoded = written;
    ASN__ENCODED_OK(er);
}
