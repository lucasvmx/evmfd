/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "ModuloRegistroDigitalVoto_CorrespondenciaResultado.h"

asn_TYPE_member_t asn_MBR_ModuloRegistroDigitalVoto_CorrespondenciaResultado_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_CorrespondenciaResultado, identificacao),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_IdentificacaoUrna,
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
		"identificacao"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_CorrespondenciaResultado, carga),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_Carga,
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
		"carga"
		},
};
static const ber_tlv_tag_t asn_DEF_ModuloRegistroDigitalVoto_CorrespondenciaResultado_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ModuloRegistroDigitalVoto_CorrespondenciaResultado_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* cargaat 189 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* identificacaoSecaoEleitoralat 231 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 } /* identificacaoContingenciaat 233 */
};
asn_SEQUENCE_specifics_t asn_SPC_ModuloRegistroDigitalVoto_CorrespondenciaResultado_specs_1 = {
	sizeof(struct ModuloRegistroDigitalVoto_CorrespondenciaResultado),
	offsetof(struct ModuloRegistroDigitalVoto_CorrespondenciaResultado, _asn_ctx),
	asn_MAP_ModuloRegistroDigitalVoto_CorrespondenciaResultado_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ModuloRegistroDigitalVoto_CorrespondenciaResultado = {
	"CorrespondenciaResultado",
	"CorrespondenciaResultado",
	&asn_OP_SEQUENCE,
	asn_DEF_ModuloRegistroDigitalVoto_CorrespondenciaResultado_tags_1,
	sizeof(asn_DEF_ModuloRegistroDigitalVoto_CorrespondenciaResultado_tags_1)
		/sizeof(asn_DEF_ModuloRegistroDigitalVoto_CorrespondenciaResultado_tags_1[0]), /* 1 */
	asn_DEF_ModuloRegistroDigitalVoto_CorrespondenciaResultado_tags_1,	/* Same as above */
	sizeof(asn_DEF_ModuloRegistroDigitalVoto_CorrespondenciaResultado_tags_1)
		/sizeof(asn_DEF_ModuloRegistroDigitalVoto_CorrespondenciaResultado_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ModuloRegistroDigitalVoto_CorrespondenciaResultado_1,
	2,	/* Elements count */
	&asn_SPC_ModuloRegistroDigitalVoto_CorrespondenciaResultado_specs_1	/* Additional specs */
};

