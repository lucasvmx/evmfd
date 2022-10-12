/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "ModuloRegistroDigitalVoto_ApuracaoEletronica.h"

asn_TYPE_member_t asn_MBR_ModuloRegistroDigitalVoto_ApuracaoEletronica_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_ApuracaoEletronica, tipoapuracao),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_TipoApuracao,
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
		"tipoapuracao"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_ApuracaoEletronica, motivoApuracao),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_MotivoApuracaoEletronica,
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
		"motivoApuracao"
		},
};
static const ber_tlv_tag_t asn_DEF_ModuloRegistroDigitalVoto_ApuracaoEletronica_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ModuloRegistroDigitalVoto_ApuracaoEletronica_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 1 }, /* tipoapuracaoat 146 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, -1, 0 } /* motivoApuracaoat 148 */
};
asn_SEQUENCE_specifics_t asn_SPC_ModuloRegistroDigitalVoto_ApuracaoEletronica_specs_1 = {
	sizeof(struct ModuloRegistroDigitalVoto_ApuracaoEletronica),
	offsetof(struct ModuloRegistroDigitalVoto_ApuracaoEletronica, _asn_ctx),
	asn_MAP_ModuloRegistroDigitalVoto_ApuracaoEletronica_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ModuloRegistroDigitalVoto_ApuracaoEletronica = {
	"ApuracaoEletronica",
	"ApuracaoEletronica",
	&asn_OP_SEQUENCE,
	asn_DEF_ModuloRegistroDigitalVoto_ApuracaoEletronica_tags_1,
	sizeof(asn_DEF_ModuloRegistroDigitalVoto_ApuracaoEletronica_tags_1)
		/sizeof(asn_DEF_ModuloRegistroDigitalVoto_ApuracaoEletronica_tags_1[0]), /* 1 */
	asn_DEF_ModuloRegistroDigitalVoto_ApuracaoEletronica_tags_1,	/* Same as above */
	sizeof(asn_DEF_ModuloRegistroDigitalVoto_ApuracaoEletronica_tags_1)
		/sizeof(asn_DEF_ModuloRegistroDigitalVoto_ApuracaoEletronica_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ModuloRegistroDigitalVoto_ApuracaoEletronica_1,
	2,	/* Elements count */
	&asn_SPC_ModuloRegistroDigitalVoto_ApuracaoEletronica_specs_1	/* Additional specs */
};

