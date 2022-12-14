/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral_H_
#define	_ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ModuloRegistroDigitalVoto_MunicipioZona.h"
#include "ModuloRegistroDigitalVoto_NumeroLocal.h"
#include "ModuloRegistroDigitalVoto_NumeroSecao.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral */
typedef struct ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral {
	ModuloRegistroDigitalVoto_MunicipioZona_t	 municipioZona;
	ModuloRegistroDigitalVoto_NumeroLocal_t	 local;
	ModuloRegistroDigitalVoto_NumeroSecao_t	 secao;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral;
extern asn_SEQUENCE_specifics_t asn_SPC_ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral_specs_1;
extern asn_TYPE_member_t asn_MBR_ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral_H_ */
#include "asn_internal.h"
