/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloBU"
 * 	found in "../../../asn/bu.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_IdentificacaoVotavel_H_
#define	_IdentificacaoVotavel_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NumeroPartido.h"
#include "NumeroVotavel.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* IdentificacaoVotavel */
typedef struct IdentificacaoVotavel {
	NumeroPartido_t	 partido;
	NumeroVotavel_t	 codigo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IdentificacaoVotavel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IdentificacaoVotavel;
extern asn_SEQUENCE_specifics_t asn_SPC_IdentificacaoVotavel_specs_1;
extern asn_TYPE_member_t asn_MBR_IdentificacaoVotavel_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IdentificacaoVotavel_H_ */
#include "asn_internal.h"
