/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_EleicaoVota_H_
#define	_EleicaoVota_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ModuloRegistroDigitalVoto_IDEleicao.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VotosCargo;

/* EleicaoVota */
typedef struct EleicaoVota {
	ModuloRegistroDigitalVoto_IDEleicao_t	 idEleicao;
	struct EleicaoVota__votosCargos {
		A_SEQUENCE_OF(struct VotosCargo) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} votosCargos;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EleicaoVota_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EleicaoVota;
extern asn_SEQUENCE_specifics_t asn_SPC_EleicaoVota_specs_1;
extern asn_TYPE_member_t asn_MBR_EleicaoVota_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VotosCargo.h"

#endif	/* _EleicaoVota_H_ */
#include "asn_internal.h"