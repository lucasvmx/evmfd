/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "ModuloRegistroDigitalVoto_ApuracaoMistaMR.h"

asn_TYPE_member_t asn_MBR_ModuloRegistroDigitalVoto_ApuracaoMistaMR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_ApuracaoMistaMR, tipoApuracao),
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
		"tipoApuracao"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_ApuracaoMistaMR, motivoApuracao),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_MotivoApuracaoMistaComMR,
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
static const ber_tlv_tag_t asn_DEF_ModuloRegistroDigitalVoto_ApuracaoMistaMR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ModuloRegistroDigitalVoto_ApuracaoMistaMR_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 1 }, /* tipoApuracaoat 156 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, -1, 0 } /* motivoApuracaoat 158 */
};
asn_SEQUENCE_specifics_t asn_SPC_ModuloRegistroDigitalVoto_ApuracaoMistaMR_specs_1 = {
	sizeof(struct ModuloRegistroDigitalVoto_ApuracaoMistaMR),
	offsetof(struct ModuloRegistroDigitalVoto_ApuracaoMistaMR, _asn_ctx),
	asn_MAP_ModuloRegistroDigitalVoto_ApuracaoMistaMR_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ModuloRegistroDigitalVoto_ApuracaoMistaMR = {
	"ApuracaoMistaMR",
	"ApuracaoMistaMR",
	&asn_OP_SEQUENCE,
	asn_DEF_ModuloRegistroDigitalVoto_ApuracaoMistaMR_tags_1,
	sizeof(asn_DEF_ModuloRegistroDigitalVoto_ApuracaoMistaMR_tags_1)
		/sizeof(asn_DEF_ModuloRegistroDigitalVoto_ApuracaoMistaMR_tags_1[0]), /* 1 */
	asn_DEF_ModuloRegistroDigitalVoto_ApuracaoMistaMR_tags_1,	/* Same as above */
	sizeof(asn_DEF_ModuloRegistroDigitalVoto_ApuracaoMistaMR_tags_1)
		/sizeof(asn_DEF_ModuloRegistroDigitalVoto_ApuracaoMistaMR_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ModuloRegistroDigitalVoto_ApuracaoMistaMR_1,
	2,	/* Elements count */
	&asn_SPC_ModuloRegistroDigitalVoto_ApuracaoMistaMR_specs_1	/* Additional specs */
};

