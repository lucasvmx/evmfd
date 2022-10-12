/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloBU"
 * 	found in "../../../asn/bu.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_ModuloBU_MotivoApuracaoManual_H_
#define	_ModuloBU_MotivoApuracaoManual_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ModuloBU_MotivoApuracaoManual {
	ModuloBU_MotivoApuracaoManual_urnaComDefeito	= 1,
	ModuloBU_MotivoApuracaoManual_urnaIndisponivelInicio	= 2,
	ModuloBU_MotivoApuracaoManual_urnaOutraSecao	= 3,
	ModuloBU_MotivoApuracaoManual_outros	= 99
} e_ModuloBU_MotivoApuracaoManual;

/* ModuloBU_MotivoApuracaoManual */
typedef long	 ModuloBU_MotivoApuracaoManual_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ModuloBU_MotivoApuracaoManual_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ModuloBU_MotivoApuracaoManual;
extern const asn_INTEGER_specifics_t asn_SPC_ModuloBU_MotivoApuracaoManual_specs_1;
asn_struct_free_f ModuloBU_MotivoApuracaoManual_free;
asn_struct_print_f ModuloBU_MotivoApuracaoManual_print;
asn_constr_check_f ModuloBU_MotivoApuracaoManual_constraint;
ber_type_decoder_f ModuloBU_MotivoApuracaoManual_decode_ber;
der_type_encoder_f ModuloBU_MotivoApuracaoManual_encode_der;
xer_type_decoder_f ModuloBU_MotivoApuracaoManual_decode_xer;
xer_type_encoder_f ModuloBU_MotivoApuracaoManual_encode_xer;
jer_type_encoder_f ModuloBU_MotivoApuracaoManual_encode_jer;
oer_type_decoder_f ModuloBU_MotivoApuracaoManual_decode_oer;
oer_type_encoder_f ModuloBU_MotivoApuracaoManual_encode_oer;
per_type_decoder_f ModuloBU_MotivoApuracaoManual_decode_uper;
per_type_encoder_f ModuloBU_MotivoApuracaoManual_encode_uper;
per_type_decoder_f ModuloBU_MotivoApuracaoManual_decode_aper;
per_type_encoder_f ModuloBU_MotivoApuracaoManual_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ModuloBU_MotivoApuracaoManual_H_ */
#include "asn_internal.h"
