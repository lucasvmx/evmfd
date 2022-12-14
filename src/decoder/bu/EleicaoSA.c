/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "EleicaoSA.h"

static asn_TYPE_member_t asn_MBR_votosCargos_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_VotosCargo,
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
static const ber_tlv_tag_t asn_DEF_votosCargos_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_votosCargos_specs_5 = {
	sizeof(struct EleicaoSA__votosCargos),
	offsetof(struct EleicaoSA__votosCargos, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_votosCargos_5 = {
	"votosCargos",
	"votosCargos",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_votosCargos_tags_5,
	sizeof(asn_DEF_votosCargos_tags_5)
		/sizeof(asn_DEF_votosCargos_tags_5[0]), /* 1 */
	asn_DEF_votosCargos_tags_5,	/* Same as above */
	sizeof(asn_DEF_votosCargos_tags_5)
		/sizeof(asn_DEF_votosCargos_tags_5[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_votosCargos_5,
	1,	/* Single element */
	&asn_SPC_votosCargos_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_EleicaoSA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EleicaoSA, idEleicao),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_IDEleicao,
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
		"idEleicao"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EleicaoSA, tipoCedulaSA),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_TipoCedulaSA,
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
		"tipoCedulaSA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EleicaoSA, origemVotosSA),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_OrigemVotosSA,
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
		"origemVotosSA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EleicaoSA, votosCargos),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_votosCargos_5,
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
		"votosCargos"
		},
};
static const ber_tlv_tag_t asn_DEF_EleicaoSA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EleicaoSA_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* idEleicaoat 199 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 1 }, /* tipoCedulaSAat 200 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 2, -1, 0 }, /* origemVotosSAat 201 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, 0, 0 } /* votosCargosat 203 */
};
asn_SEQUENCE_specifics_t asn_SPC_EleicaoSA_specs_1 = {
	sizeof(struct EleicaoSA),
	offsetof(struct EleicaoSA, _asn_ctx),
	asn_MAP_EleicaoSA_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EleicaoSA = {
	"EleicaoSA",
	"EleicaoSA",
	&asn_OP_SEQUENCE,
	asn_DEF_EleicaoSA_tags_1,
	sizeof(asn_DEF_EleicaoSA_tags_1)
		/sizeof(asn_DEF_EleicaoSA_tags_1[0]), /* 1 */
	asn_DEF_EleicaoSA_tags_1,	/* Same as above */
	sizeof(asn_DEF_EleicaoSA_tags_1)
		/sizeof(asn_DEF_EleicaoSA_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_EleicaoSA_1,
	4,	/* Elements count */
	&asn_SPC_EleicaoSA_specs_1	/* Additional specs */
};

