/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloAssinaturaResultado"
 * 	found in "../../../asn/assinatura.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_AlgoritmoAssinaturaInfo_H_
#define	_AlgoritmoAssinaturaInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "AlgoritmoAssinatura.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AlgoritmoAssinaturaInfo */
typedef struct AlgoritmoAssinaturaInfo {
	AlgoritmoAssinatura_t	 algoritmo;
	long	 bits;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlgoritmoAssinaturaInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlgoritmoAssinaturaInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_AlgoritmoAssinaturaInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_AlgoritmoAssinaturaInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AlgoritmoAssinaturaInfo_H_ */
#include "asn_internal.h"
