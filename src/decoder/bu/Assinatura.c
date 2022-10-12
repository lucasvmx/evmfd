/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloAssinaturaResultado"
 * 	found in "../../../asn/assinatura.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "Assinatura.h"

static asn_TYPE_member_t asn_MBR_arquivosAssinados_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AssinaturaArquivo,
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
static const ber_tlv_tag_t asn_DEF_arquivosAssinados_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_arquivosAssinados_specs_2 = {
	sizeof(struct Assinatura__arquivosAssinados),
	offsetof(struct Assinatura__arquivosAssinados, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_arquivosAssinados_2 = {
	"arquivosAssinados",
	"arquivosAssinados",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_arquivosAssinados_tags_2,
	sizeof(asn_DEF_arquivosAssinados_tags_2)
		/sizeof(asn_DEF_arquivosAssinados_tags_2[0]), /* 1 */
	asn_DEF_arquivosAssinados_tags_2,	/* Same as above */
	sizeof(asn_DEF_arquivosAssinados_tags_2)
		/sizeof(asn_DEF_arquivosAssinados_tags_2[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_arquivosAssinados_2,
	1,	/* Single element */
	&asn_SPC_arquivosAssinados_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Assinatura_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Assinatura, arquivosAssinados),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_arquivosAssinados_2,
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
		"arquivosAssinados"
		},
};
static const ber_tlv_tag_t asn_DEF_Assinatura_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Assinatura_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* arquivosAssinadosat 69 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Assinatura_specs_1 = {
	sizeof(struct Assinatura),
	offsetof(struct Assinatura, _asn_ctx),
	asn_MAP_Assinatura_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Assinatura = {
	"Assinatura",
	"Assinatura",
	&asn_OP_SEQUENCE,
	asn_DEF_Assinatura_tags_1,
	sizeof(asn_DEF_Assinatura_tags_1)
		/sizeof(asn_DEF_Assinatura_tags_1[0]), /* 1 */
	asn_DEF_Assinatura_tags_1,	/* Same as above */
	sizeof(asn_DEF_Assinatura_tags_1)
		/sizeof(asn_DEF_Assinatura_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Assinatura_1,
	1,	/* Elements count */
	&asn_SPC_Assinatura_specs_1	/* Additional specs */
};

