/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_TipoCedulaSA_H_
#define	_TipoCedulaSA_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TipoCedulaSA {
	TipoCedulaSA_majoritario	= 1,
	TipoCedulaSA_proporcional	= 2
} e_TipoCedulaSA;

/* TipoCedulaSA */
typedef long	 TipoCedulaSA_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TipoCedulaSA_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TipoCedulaSA;
extern const asn_INTEGER_specifics_t asn_SPC_TipoCedulaSA_specs_1;
asn_struct_free_f TipoCedulaSA_free;
asn_struct_print_f TipoCedulaSA_print;
asn_constr_check_f TipoCedulaSA_constraint;
ber_type_decoder_f TipoCedulaSA_decode_ber;
der_type_encoder_f TipoCedulaSA_encode_der;
xer_type_decoder_f TipoCedulaSA_decode_xer;
xer_type_encoder_f TipoCedulaSA_encode_xer;
jer_type_encoder_f TipoCedulaSA_encode_jer;
oer_type_decoder_f TipoCedulaSA_decode_oer;
oer_type_encoder_f TipoCedulaSA_encode_oer;
per_type_decoder_f TipoCedulaSA_decode_uper;
per_type_encoder_f TipoCedulaSA_encode_uper;
per_type_decoder_f TipoCedulaSA_decode_aper;
per_type_encoder_f TipoCedulaSA_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TipoCedulaSA_H_ */
#include "asn_internal.h"
