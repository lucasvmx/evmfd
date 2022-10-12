/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloAssinaturaResultado"
 * 	found in "../../../asn/assinatura.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_AutoAssinaturaDigital_H_
#define	_AutoAssinaturaDigital_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DescritorChave.h"
#include "AlgoritmoHashInfo.h"
#include "AlgoritmoAssinaturaInfo.h"
#include "AssinaturaDigital.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AutoAssinaturaDigital */
typedef struct AutoAssinaturaDigital {
	DescritorChave_t	 usuario;
	AlgoritmoHashInfo_t	 algoritmoHash;
	AlgoritmoAssinaturaInfo_t	 algoritmoAssinatura;
	AssinaturaDigital_t	 assinatura;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AutoAssinaturaDigital_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AutoAssinaturaDigital;
extern asn_SEQUENCE_specifics_t asn_SPC_AutoAssinaturaDigital_specs_1;
extern asn_TYPE_member_t asn_MBR_AutoAssinaturaDigital_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _AutoAssinaturaDigital_H_ */
#include "asn_internal.h"
