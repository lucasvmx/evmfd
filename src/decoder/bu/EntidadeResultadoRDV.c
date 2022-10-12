/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "EntidadeResultadoRDV.h"

static asn_TYPE_member_t asn_MBR_EntidadeResultadoRDV_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeResultadoRDV, cabecalho),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_CabecalhoEntidade,
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
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeResultadoRDV, urna),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_Urna,
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
	{ ATF_NOFLAGS, 0, offsetof(struct EntidadeResultadoRDV, rdv),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_EntidadeRegistroDigitalVoto,
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
		"rdv"
		},
};
static const ber_tlv_tag_t asn_DEF_EntidadeResultadoRDV_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EntidadeResultadoRDV_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 2 }, /* cabecalhoat 132 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 1 }, /* urnaat 133 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 0 } /* rdvat 135 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EntidadeResultadoRDV_specs_1 = {
	sizeof(struct EntidadeResultadoRDV),
	offsetof(struct EntidadeResultadoRDV, _asn_ctx),
	asn_MAP_EntidadeResultadoRDV_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EntidadeResultadoRDV = {
	"EntidadeResultadoRDV",
	"EntidadeResultadoRDV",
	&asn_OP_SEQUENCE,
	asn_DEF_EntidadeResultadoRDV_tags_1,
	sizeof(asn_DEF_EntidadeResultadoRDV_tags_1)
		/sizeof(asn_DEF_EntidadeResultadoRDV_tags_1[0]), /* 1 */
	asn_DEF_EntidadeResultadoRDV_tags_1,	/* Same as above */
	sizeof(asn_DEF_EntidadeResultadoRDV_tags_1)
		/sizeof(asn_DEF_EntidadeResultadoRDV_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_EntidadeResultadoRDV_1,
	3,	/* Elements count */
	&asn_SPC_EntidadeResultadoRDV_specs_1	/* Additional specs */
};

