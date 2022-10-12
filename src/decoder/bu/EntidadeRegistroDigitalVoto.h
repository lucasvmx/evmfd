/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_EntidadeRegistroDigitalVoto_H_
#define	_EntidadeRegistroDigitalVoto_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ModuloRegistroDigitalVoto_IDPleito.h"
#include "ModuloRegistroDigitalVoto_Fase.h"
#include "ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral.h"
#include "Eleicoes.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EntidadeRegistroDigitalVoto */
typedef struct EntidadeRegistroDigitalVoto {
	ModuloRegistroDigitalVoto_IDPleito_t	 pleito;
	ModuloRegistroDigitalVoto_Fase_t	 fase;
	ModuloRegistroDigitalVoto_IdentificacaoSecaoEleitoral_t	 identificacao;
	Eleicoes_t	 eleicoes;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EntidadeRegistroDigitalVoto_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EntidadeRegistroDigitalVoto;
extern asn_SEQUENCE_specifics_t asn_SPC_EntidadeRegistroDigitalVoto_specs_1;
extern asn_TYPE_member_t asn_MBR_EntidadeRegistroDigitalVoto_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _EntidadeRegistroDigitalVoto_H_ */
#include "asn_internal.h"
