/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloBU"
 * 	found in "../../../asn/bu.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_ModuloBU_CorrespondenciaResultado_H_
#define	_ModuloBU_CorrespondenciaResultado_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ModuloBU_IdentificacaoUrna.h"
#include "ModuloBU_Carga.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ModuloBU_CorrespondenciaResultado */
typedef struct ModuloBU_CorrespondenciaResultado {
	ModuloBU_IdentificacaoUrna_t	 identificacao;
	ModuloBU_Carga_t	 carga;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ModuloBU_CorrespondenciaResultado_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ModuloBU_CorrespondenciaResultado;
extern asn_SEQUENCE_specifics_t asn_SPC_ModuloBU_CorrespondenciaResultado_specs_1;
extern asn_TYPE_member_t asn_MBR_ModuloBU_CorrespondenciaResultado_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ModuloBU_CorrespondenciaResultado_H_ */
#include "asn_internal.h"
