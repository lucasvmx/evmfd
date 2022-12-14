/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloBU"
 * 	found in "../../../asn/bu.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_ModuloBU_Urna_H_
#define	_ModuloBU_Urna_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ModuloBU_TipoUrna.h"
#include "GeneralString.h"
#include "ModuloBU_CorrespondenciaResultado.h"
#include "ModuloBU_TipoArquivo.h"
#include "ModuloBU_NumeroSerieFlash.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TipoApuracaoSA;

/* ModuloBU_Urna */
typedef struct ModuloBU_Urna {
	ModuloBU_TipoUrna_t	 tipoUrna;
	GeneralString_t	 versaoVotacao;
	ModuloBU_CorrespondenciaResultado_t	 correspondenciaResultado;
	ModuloBU_TipoArquivo_t	 tipoArquivo;
	ModuloBU_NumeroSerieFlash_t	 numeroSerieFV;
	struct TipoApuracaoSA	*motivoUtilizacaoSA;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ModuloBU_Urna_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ModuloBU_Urna;
extern asn_SEQUENCE_specifics_t asn_SPC_ModuloBU_Urna_specs_1;
extern asn_TYPE_member_t asn_MBR_ModuloBU_Urna_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ModuloBU_TipoApuracaoSA.h"

#endif	/* _ModuloBU_Urna_H_ */
#include "asn_internal.h"
