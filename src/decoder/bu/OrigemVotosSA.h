/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_OrigemVotosSA_H_
#define	_OrigemVotosSA_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OrigemVotosSA {
	OrigemVotosSA_cedula	= 1,
	OrigemVotosSA_rdv	= 2,
	OrigemVotosSA_bu	= 3
} e_OrigemVotosSA;

/* OrigemVotosSA */
typedef long	 OrigemVotosSA_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_OrigemVotosSA_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_OrigemVotosSA;
extern const asn_INTEGER_specifics_t asn_SPC_OrigemVotosSA_specs_1;
asn_struct_free_f OrigemVotosSA_free;
asn_struct_print_f OrigemVotosSA_print;
asn_constr_check_f OrigemVotosSA_constraint;
ber_type_decoder_f OrigemVotosSA_decode_ber;
der_type_encoder_f OrigemVotosSA_encode_der;
xer_type_decoder_f OrigemVotosSA_decode_xer;
xer_type_encoder_f OrigemVotosSA_encode_xer;
jer_type_encoder_f OrigemVotosSA_encode_jer;
oer_type_decoder_f OrigemVotosSA_decode_oer;
oer_type_encoder_f OrigemVotosSA_encode_oer;
per_type_decoder_f OrigemVotosSA_decode_uper;
per_type_encoder_f OrigemVotosSA_encode_uper;
per_type_decoder_f OrigemVotosSA_decode_aper;
per_type_encoder_f OrigemVotosSA_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _OrigemVotosSA_H_ */
#include "asn_internal.h"
