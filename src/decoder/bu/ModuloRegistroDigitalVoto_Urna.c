/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "ModuloRegistroDigitalVoto_Urna.h"

asn_TYPE_member_t asn_MBR_ModuloRegistroDigitalVoto_Urna_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_Urna, tipoUrna),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_TipoUrna,
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
		"tipoUrna"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_Urna, versaoVotacao),
		(ASN_TAG_CLASS_UNIVERSAL | (27 << 2)),
		0,
		&asn_DEF_GeneralString,
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
		"versaoVotacao"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_Urna, correspondenciaResultado),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_CorrespondenciaResultado,
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
		"correspondenciaResultado"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_Urna, tipoArquivo),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_TipoArquivo,
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
		"tipoArquivo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_Urna, numeroSerieFV),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_NumeroSerieFlash,
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
		"numeroSerieFV"
		},
	{ ATF_POINTER, 1, offsetof(struct ModuloRegistroDigitalVoto_Urna, motivoUtilizacaoSA),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_TipoApuracaoSA,
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
		"motivoUtilizacaoSA"
		},
};
static const int asn_MAP_ModuloRegistroDigitalVoto_Urna_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_ModuloRegistroDigitalVoto_Urna_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ModuloRegistroDigitalVoto_Urna_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 4, 0, 0 }, /* numeroSerieFVat 254 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 1 }, /* tipoUrnaat 250 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 3, -1, 0 }, /* tipoArquivoat 253 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 }, /* correspondenciaResultadoat 252 */
    { (ASN_TAG_CLASS_UNIVERSAL | (27 << 2)), 1, 0, 0 }, /* versaoVotacaoat 251 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 5, 0, 0 }, /* apuracaoMistaMRat 242 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 5, 0, 0 }, /* apuracaoMistaBUAEat 243 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 5, 0, 0 }, /* apuracaoTotalmenteManualat 244 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 5, 0, 0 } /* apuracaoEletronicaat 246 */
};
asn_SEQUENCE_specifics_t asn_SPC_ModuloRegistroDigitalVoto_Urna_specs_1 = {
	sizeof(struct ModuloRegistroDigitalVoto_Urna),
	offsetof(struct ModuloRegistroDigitalVoto_Urna, _asn_ctx),
	asn_MAP_ModuloRegistroDigitalVoto_Urna_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_ModuloRegistroDigitalVoto_Urna_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ModuloRegistroDigitalVoto_Urna = {
	"Urna",
	"Urna",
	&asn_OP_SEQUENCE,
	asn_DEF_ModuloRegistroDigitalVoto_Urna_tags_1,
	sizeof(asn_DEF_ModuloRegistroDigitalVoto_Urna_tags_1)
		/sizeof(asn_DEF_ModuloRegistroDigitalVoto_Urna_tags_1[0]), /* 1 */
	asn_DEF_ModuloRegistroDigitalVoto_Urna_tags_1,	/* Same as above */
	sizeof(asn_DEF_ModuloRegistroDigitalVoto_Urna_tags_1)
		/sizeof(asn_DEF_ModuloRegistroDigitalVoto_Urna_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ModuloRegistroDigitalVoto_Urna_1,
	6,	/* Elements count */
	&asn_SPC_ModuloRegistroDigitalVoto_Urna_specs_1	/* Additional specs */
};

