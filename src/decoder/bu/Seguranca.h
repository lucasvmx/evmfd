/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloBU"
 * 	found in "../../../asn/bu.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_Seguranca_H_
#define	_Seguranca_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Seguranca */
typedef struct Seguranca {
	long	 idTipoArquivo;
	long	 idCriptografia;
	long	 idArquivoCD;
	OCTET_STRING_t	 idArquivoChave;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Seguranca_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Seguranca;
extern asn_SEQUENCE_specifics_t asn_SPC_Seguranca_specs_1;
extern asn_TYPE_member_t asn_MBR_Seguranca_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Seguranca_H_ */
#include "asn_internal.h"
