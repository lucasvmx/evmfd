/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloAssinaturaResultado"
 * 	found in "../../../asn/assinatura.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "AssinaturaDigital.h"

asn_TYPE_member_t asn_MBR_AssinaturaDigital_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AssinaturaDigital, tamanho),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
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
		"tamanho"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AssinaturaDigital, hash),
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
		"hash"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AssinaturaDigital, assinatura),
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
		"assinatura"
		},
};
static const ber_tlv_tag_t asn_DEF_AssinaturaDigital_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AssinaturaDigital_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* tamanhoat 79 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, 0, 1 }, /* hashat 80 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 2, -1, 0 } /* assinaturaat 81 */
};
asn_SEQUENCE_specifics_t asn_SPC_AssinaturaDigital_specs_1 = {
	sizeof(struct AssinaturaDigital),
	offsetof(struct AssinaturaDigital, _asn_ctx),
	asn_MAP_AssinaturaDigital_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AssinaturaDigital = {
	"AssinaturaDigital",
	"AssinaturaDigital",
	&asn_OP_SEQUENCE,
	asn_DEF_AssinaturaDigital_tags_1,
	sizeof(asn_DEF_AssinaturaDigital_tags_1)
		/sizeof(asn_DEF_AssinaturaDigital_tags_1[0]), /* 1 */
	asn_DEF_AssinaturaDigital_tags_1,	/* Same as above */
	sizeof(asn_DEF_AssinaturaDigital_tags_1)
		/sizeof(asn_DEF_AssinaturaDigital_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_AssinaturaDigital_1,
	3,	/* Elements count */
	&asn_SPC_AssinaturaDigital_specs_1	/* Additional specs */
};
