/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloBU"
 * 	found in "../../../asn/bu.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_ModuloBU_Carga_H_
#define	_ModuloBU_Carga_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ModuloBU_NumeroInternoUrna.h"
#include "ModuloBU_NumeroSerieFlash.h"
#include "ModuloBU_DataHoraJE.h"
#include "GeneralString.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ModuloBU_Carga */
typedef struct ModuloBU_Carga {
	ModuloBU_NumeroInternoUrna_t	 numeroInternoUrna;
	ModuloBU_NumeroSerieFlash_t	 numeroSerieFC;
	ModuloBU_DataHoraJE_t	 dataHoraCarga;
	GeneralString_t	 codigoCarga;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ModuloBU_Carga_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ModuloBU_Carga;
extern asn_SEQUENCE_specifics_t asn_SPC_ModuloBU_Carga_specs_1;
extern asn_TYPE_member_t asn_MBR_ModuloBU_Carga_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ModuloBU_Carga_H_ */
#include "asn_internal.h"
