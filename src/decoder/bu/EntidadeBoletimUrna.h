/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloBU"
 * 	found in "../../../asn/bu.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_EntidadeBoletimUrna_H_
#define	_EntidadeBoletimUrna_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ModuloBU_CabecalhoEntidade.h"
#include "ModuloBU_Fase.h"
#include "ModuloBU_Urna.h"
#include "ModuloBU_IdentificacaoSecaoEleitoral.h"
#include "ModuloBU_DataHoraJE.h"
#include "DadosSecaoSA.h"
#include "QtdEleitores.h"
#include "OCTET_STRING.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ResultadoVotacaoPorEleicao;
struct CorrespondenciaResultado;
struct HistoricoVotoImpresso;

/* EntidadeBoletimUrna */
typedef struct EntidadeBoletimUrna {
	ModuloBU_CabecalhoEntidade_t	 cabecalho;
	ModuloBU_Fase_t	 fase;
	ModuloBU_Urna_t	 urna;
	ModuloBU_IdentificacaoSecaoEleitoral_t	 identificacaoSecao;
	ModuloBU_DataHoraJE_t	 dataHoraEmissao;
	DadosSecaoSA_t	 dadosSecaoSA;
	QtdEleitores_t	*qtdEleitoresLibCodigo;	/* OPTIONAL */
	QtdEleitores_t	*qtdEleitoresCompBiometrico;	/* OPTIONAL */
	struct EntidadeBoletimUrna__resultadosVotacaoPorEleicao {
		A_SEQUENCE_OF(struct ResultadoVotacaoPorEleicao) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resultadosVotacaoPorEleicao;
	struct EntidadeBoletimUrna__historicoCorrespondencias {
		A_SEQUENCE_OF(struct CorrespondenciaResultado) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *historicoCorrespondencias;
	struct EntidadeBoletimUrna__historicoVotoImpresso {
		A_SEQUENCE_OF(struct HistoricoVotoImpresso) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *historicoVotoImpresso;
	OCTET_STRING_t	 chaveAssinaturaVotosVotavel;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EntidadeBoletimUrna_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EntidadeBoletimUrna;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ResultadoVotacaoPorEleicao.h"
#include "ModuloBU_CorrespondenciaResultado.h"
#include "HistoricoVotoImpresso.h"

#endif	/* _EntidadeBoletimUrna_H_ */
#include "asn_internal.h"
