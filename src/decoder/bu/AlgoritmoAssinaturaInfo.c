/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloAssinaturaResultado"
 * 	found in "../../../asn/assinatura.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "AlgoritmoAssinaturaInfo.h"

asn_TYPE_member_t asn_MBR_AlgoritmoAssinaturaInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AlgoritmoAssinaturaInfo, algoritmo),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_AlgoritmoAssinatura,
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
		"algoritmo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlgoritmoAssinaturaInfo, bits),
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
		"bits"
		},
};
static const ber_tlv_tag_t asn_DEF_AlgoritmoAssinaturaInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AlgoritmoAssinaturaInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* bitsat 60 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 } /* algoritmoat 58 */
};
asn_SEQUENCE_specifics_t asn_SPC_AlgoritmoAssinaturaInfo_specs_1 = {
	sizeof(struct AlgoritmoAssinaturaInfo),
	offsetof(struct AlgoritmoAssinaturaInfo, _asn_ctx),
	asn_MAP_AlgoritmoAssinaturaInfo_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AlgoritmoAssinaturaInfo = {
	"AlgoritmoAssinaturaInfo",
	"AlgoritmoAssinaturaInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_AlgoritmoAssinaturaInfo_tags_1,
	sizeof(asn_DEF_AlgoritmoAssinaturaInfo_tags_1)
		/sizeof(asn_DEF_AlgoritmoAssinaturaInfo_tags_1[0]), /* 1 */
	asn_DEF_AlgoritmoAssinaturaInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_AlgoritmoAssinaturaInfo_tags_1)
		/sizeof(asn_DEF_AlgoritmoAssinaturaInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_AlgoritmoAssinaturaInfo_1,
	2,	/* Elements count */
	&asn_SPC_AlgoritmoAssinaturaInfo_specs_1	/* Additional specs */
};

