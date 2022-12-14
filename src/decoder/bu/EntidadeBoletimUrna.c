/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloBU"
 * 	found in "../../../asn/bu.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "EntidadeBoletimUrna.h"

static asn_TYPE_member_t asn_MBR_resultadosVotacaoPorEleicao_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ResultadoVotacaoPorEleicao,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_resultadosVotacaoPorEleicao_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_resultadosVotacaoPorEleicao_specs_10 = {
	sizeof(struct EntidadeBoletimUrna__resultadosVotacaoPorEleicao),
	offsetof(struct EntidadeBoletimUrna__resultadosVotacaoPorEleicao, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resultadosVotacaoPorEleicao_10 = {
	"resultadosVotacaoPorEleicao",
	"resultadosVotacaoPorEleicao",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_resultadosVotacaoPorEleicao_tags_10,
	sizeof(asn_DEF_resultadosVotacaoPorEleicao_tags_10)
		/sizeof(asn_DEF_resultadosVotacaoPorEleicao_tags_10[0]) - 1, /* 1 */
	asn_DEF_resultadosVotacaoPorEleicao_tags_10,	/* Same as above */
	sizeof(asn_DEF_resultadosVotacaoPorEleicao_tags_10)
		/sizeof(asn_DEF_resultadosVotacaoPorEleicao_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_resultadosVotacaoPorEleicao_10,
	1,	/* Single element */
	&asn_SPC_resultadosVotacaoPorEleicao_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_historicoCorrespondencias_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ModuloBU_CorrespondenciaResultado,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_historicoCorrespondencias_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_historicoCorrespondencias_specs_12 = {
	sizeof(struct EntidadeBoletimUrna__historicoCorrespondencias),
	offsetof(struct EntidadeBoletimUrna__historicoCorrespondencias, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_historicoCorrespondencias_12 = {
	"historicoCorrespondencias",
	"historicoCorrespondencias",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_historicoCorrespondencias_tags_12,
	sizeof(asn_DEF_historicoCorrespondencias_tags_12)
		/sizeof(asn_DEF_historicoCorrespondencias_tags_12[0]) - 1, /* 1 */
	asn_DEF_historicoCorrespondencias_tags_12,	/* Same as above */
	sizeof(asn_DEF_historicoCorrespondencias_tags_12)
		/sizeof(asn_DEF_historicoCorrespondencias_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_historicoCorrespondencias_12,
	1,	/* Single element */
	&asn_SPC_historicoCorrespondencias_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_historicoVotoImpresso_14[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_HistoricoVotoImpresso,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_historicoVotoImpresso_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_historicoVotoImpresso_specs_14 = {
	sizeof(struct EntidadeBoletimUrna__historicoVotoImpresso),
	offsetof(struct EntidadeBoletimUrna__historicoVotoImpresso, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_historicoVotoImpresso_14 = {
	"historicoVotoImpresso",
	"historicoVotoImpresso",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_historicoVotoImpresso_tags_14,
	sizeof(asn_DEF_historicoVotoImpresso_tags_14)
		/sizeof(asn_DEF_historicoVotoImpresso_tags_14[0]) - 1, /* 1 */
	asn_DEF_historicoVotoImpresso_tags_14,	/* Same as above */
	sizeof(asn_DEF_historicoVotoImpresso_tags_14)
		/sizeof(asn_DEF_historicoVotoImpresso_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_historicoVotoImpresso_14,
	1,	/* Single element */
	&asn_SPC_historicoVotoImpresso_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_EntidadeBoletimUrna_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeBoletimUrna, cabecalho),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ModuloBU_CabecalhoEntidade,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"cabecalho"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeBoletimUrna, fase),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ModuloBU_Fase,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"fase"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeBoletimUrna, urna),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ModuloBU_Urna,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"urna"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeBoletimUrna, identificacaoSecao),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ModuloBU_IdentificacaoSecaoEleitoral,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"identificacaoSecao"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeBoletimUrna, dataHoraEmissao),
		(ASN_TAG_CLASS_UNIVERSAL | (27 << 2)),
		0,
		&asn_DEF_ModuloBU_DataHoraJE,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dataHoraEmissao"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeBoletimUrna, dadosSecaoSA),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_DadosSecaoSA,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dadosSecaoSA"
		},
	{ ATF_POINTER, 2, offsetof(struct EntidadeBoletimUrna, qtdEleitoresLibCodigo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QtdEleitores,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"qtdEleitoresLibCodigo"
		},
	{ ATF_POINTER, 1, offsetof(struct EntidadeBoletimUrna, qtdEleitoresCompBiometrico),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QtdEleitores,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"qtdEleitoresCompBiometrico"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeBoletimUrna, resultadosVotacaoPorEleicao),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_resultadosVotacaoPorEleicao_10,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"resultadosVotacaoPorEleicao"
		},
	{ ATF_POINTER, 2, offsetof(struct EntidadeBoletimUrna, historicoCorrespondencias),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_historicoCorrespondencias_12,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"historicoCorrespondencias"
		},
	{ ATF_POINTER, 1, offsetof(struct EntidadeBoletimUrna, historicoVotoImpresso),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_historicoVotoImpresso_14,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"historicoVotoImpresso"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeBoletimUrna, chaveAssinaturaVotosVotavel),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"chaveAssinaturaVotosVotavel"
		},
};
static const int asn_MAP_EntidadeBoletimUrna_oms_1[] = { 6, 7, 9, 10 };
static const ber_tlv_tag_t asn_DEF_EntidadeBoletimUrna_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EntidadeBoletimUrna_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 11, 0, 0 }, /* chaveAssinaturaVotosVotavelat 165 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 0 }, /* faseat 155 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 2 }, /* cabecalhoat 154 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -1, 1 }, /* urnaat 156 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -2, 0 }, /* identificacaoSecaoat 157 */
    { (ASN_TAG_CLASS_UNIVERSAL | (27 << 2)), 4, 0, 0 }, /* dataHoraEmissaoat 158 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 5, 0, 0 }, /* dadosSecaoat 231 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 5, 0, 1 }, /* dadosSAat 233 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 6, -1, 0 }, /* qtdEleitoresLibCodigoat 160 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 7, 0, 0 }, /* qtdEleitoresCompBiometricoat 161 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 8, 0, 0 }, /* resultadosVotacaoPorEleicaoat 162 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 9, 0, 0 }, /* historicoCorrespondenciasat 163 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 10, 0, 0 } /* historicoVotoImpressoat 164 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EntidadeBoletimUrna_specs_1 = {
	sizeof(struct EntidadeBoletimUrna),
	offsetof(struct EntidadeBoletimUrna, _asn_ctx),
	asn_MAP_EntidadeBoletimUrna_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_EntidadeBoletimUrna_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EntidadeBoletimUrna = {
	"EntidadeBoletimUrna",
	"EntidadeBoletimUrna",
	&asn_OP_SEQUENCE,
	asn_DEF_EntidadeBoletimUrna_tags_1,
	sizeof(asn_DEF_EntidadeBoletimUrna_tags_1)
		/sizeof(asn_DEF_EntidadeBoletimUrna_tags_1[0]), /* 1 */
	asn_DEF_EntidadeBoletimUrna_tags_1,	/* Same as above */
	sizeof(asn_DEF_EntidadeBoletimUrna_tags_1)
		/sizeof(asn_DEF_EntidadeBoletimUrna_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_EntidadeBoletimUrna_1,
	12,	/* Elements count */
	&asn_SPC_EntidadeBoletimUrna_specs_1	/* Additional specs */
};

