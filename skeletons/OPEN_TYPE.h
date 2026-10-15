/*-
 * Copyright (c) 2017-2017 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */
#ifndef ASN_OPEN_TYPE_H
#define ASN_OPEN_TYPE_H

#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

#define OPEN_TYPE_free CHOICE_free
#define OPEN_TYPE_print CHOICE_print
#define OPEN_TYPE_compare CHOICE_compare
#define OPEN_TYPE_constraint CHOICE_constraint
#define OPEN_TYPE_decode_ber NULL
#define OPEN_TYPE_encode_der CHOICE_encode_der
#define OPEN_TYPE_decode_xer NULL
#define OPEN_TYPE_encode_xer CHOICE_encode_xer
#define OPEN_TYPE_decode_uper NULL

extern asn_TYPE_operation_t asn_OP_OPEN_TYPE;

/*
 * Decode an Open Type which is potentially constraiend
 * by the other members of the parent structure.
 */
asn_dec_rval_t OPEN_TYPE_ber_get(const asn_codec_ctx_t *opt_codec_ctx,
                                 const asn_TYPE_descriptor_t *parent_type,
                                 void *parent_structure,
                                 const asn_TYPE_member_t *element,
                                 const void *ptr, size_t size);

asn_dec_rval_t OPEN_TYPE_xer_get(const asn_codec_ctx_t *opt_codec_ctx,
                                 const asn_TYPE_descriptor_t *parent_type,
                                 void *parent_structure,
                                 const asn_TYPE_member_t *element,
                                 const void *ptr, size_t size);

asn_dec_rval_t OPEN_TYPE_oer_get(const asn_codec_ctx_t *opt_codec_ctx,
                                 const asn_TYPE_descriptor_t *parent_type,
                                 void *parent_structure,
                                 asn_TYPE_member_t *element, const void *ptr,
                                 size_t size);

asn_dec_rval_t OPEN_TYPE_uper_get(const asn_codec_ctx_t *opt_codec_ctx,
                                  const asn_TYPE_descriptor_t *parent_type,
                                  void *parent_structure,
                                  const asn_TYPE_member_t *element,
                                  asn_per_data_t *pd);

asn_enc_rval_t OPEN_TYPE_encode_uper(
    const asn_TYPE_descriptor_t *type_descriptor,
    const asn_per_constraints_t *constraints, const void *struct_ptr,
    asn_per_outp_t *per_output);

/*
 * The element of a SEQUENCE OF / SET OF whose component is an open type
 * ("SEQUENCE OF CLASS.&Type({Set}{@.id})"). The element's type is selected by
 * a member of the structure that CONTAINS the list, so the element's
 * type_selector is given the list (list_type, list) and is generated to reach
 * that structure from it. *element_ptr is the element's CHOICE, allocated when
 * NULL.
 */
asn_dec_rval_t OPEN_TYPE_uper_get_element(const asn_codec_ctx_t *opt_codec_ctx,
                                          const asn_TYPE_descriptor_t *list_type,
                                          const void *list,
                                          const asn_TYPE_member_t *element,
                                          void **element_ptr,
                                          asn_per_data_t *pd);

asn_dec_rval_t OPEN_TYPE_oer_get_element(const asn_codec_ctx_t *opt_codec_ctx,
                                         const asn_TYPE_descriptor_t *list_type,
                                         const void *list,
                                         const asn_TYPE_member_t *element,
                                         void **element_ptr, const void *ptr,
                                         size_t size);

/*
 * A random value for an open type, consistent with the identifier already drawn in
 * the structure the type selector reads (parent_type/parent: a SEQUENCE, a CHOICE,
 * or the list for a SEQUENCE OF component). ARFILL_FAILED when that identifier
 * selects nothing — the caller draws it again. *value_ptr is the open type's CHOICE,
 * allocated when NULL.
 */
asn_random_fill_result_t OPEN_TYPE_random_fill_selected(
    const asn_TYPE_descriptor_t *parent_type, const void *parent,
    const asn_TYPE_member_t *element, void **value_ptr, size_t max_length);

asn_enc_rval_t OPEN_TYPE_encode_oer(const asn_TYPE_descriptor_t *type_descriptor,
                                    const asn_oer_constraints_t *constraints,
                                    const void *struct_ptr,
                                    asn_app_consume_bytes_f *cb, void *app_key);

#ifdef __cplusplus
}
#endif

#endif	/* ASN_OPEN_TYPE_H */
