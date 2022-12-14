/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloBU"
 * 	found in "../../../asn/bu.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_ModuloBU_IdentificacaoSecaoEleitoral_H_
#define	_ModuloBU_IdentificacaoSecaoEleitoral_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ModuloBU_MunicipioZona.h"
#include "ModuloBU_NumeroLocal.h"
#include "ModuloBU_NumeroSecao.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ModuloBU_IdentificacaoSecaoEleitoral */
typedef struct ModuloBU_IdentificacaoSecaoEleitoral {
	ModuloBU_MunicipioZona_t	 municipioZona;
	ModuloBU_NumeroLocal_t	 local;
	ModuloBU_NumeroSecao_t	 secao;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ModuloBU_IdentificacaoSecaoEleitoral_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ModuloBU_IdentificacaoSecaoEleitoral;
extern asn_SEQUENCE_specifics_t asn_SPC_ModuloBU_IdentificacaoSecaoEleitoral_specs_1;
extern asn_TYPE_member_t asn_MBR_ModuloBU_IdentificacaoSecaoEleitoral_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ModuloBU_IdentificacaoSecaoEleitoral_H_ */
#include "asn_internal.h"
