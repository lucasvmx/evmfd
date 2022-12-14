/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_VotoDigitado_H_
#define	_VotoDigitado_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NumericString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VotoDigitado */
typedef NumericString_t	 VotoDigitado_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_VotoDigitado_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_VotoDigitado;
asn_struct_free_f VotoDigitado_free;
asn_struct_print_f VotoDigitado_print;
asn_constr_check_f VotoDigitado_constraint;
ber_type_decoder_f VotoDigitado_decode_ber;
der_type_encoder_f VotoDigitado_encode_der;
xer_type_decoder_f VotoDigitado_decode_xer;
xer_type_encoder_f VotoDigitado_encode_xer;
jer_type_encoder_f VotoDigitado_encode_jer;
oer_type_decoder_f VotoDigitado_decode_oer;
oer_type_encoder_f VotoDigitado_encode_oer;
per_type_decoder_f VotoDigitado_decode_uper;
per_type_encoder_f VotoDigitado_encode_uper;
per_type_decoder_f VotoDigitado_decode_aper;
per_type_encoder_f VotoDigitado_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VotoDigitado_H_ */
#include "asn_internal.h"
