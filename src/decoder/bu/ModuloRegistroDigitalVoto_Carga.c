/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "ModuloRegistroDigitalVoto_Carga.h"

asn_TYPE_member_t asn_MBR_ModuloRegistroDigitalVoto_Carga_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_Carga, numeroInternoUrna),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_NumeroInternoUrna,
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
		"numeroInternoUrna"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_Carga, numeroSerieFC),
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
		"numeroSerieFC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_Carga, dataHoraCarga),
		(ASN_TAG_CLASS_UNIVERSAL | (27 << 2)),
		0,
		&asn_DEF_ModuloRegistroDigitalVoto_DataHoraJE,
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
		"dataHoraCarga"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloRegistroDigitalVoto_Carga, codigoCarga),
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
		"codigoCarga"
		},
};
static const ber_tlv_tag_t asn_DEF_ModuloRegistroDigitalVoto_Carga_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ModuloRegistroDigitalVoto_Carga_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* numeroInternoUrnaat 173 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, 0, 0 }, /* numeroSerieFCat 174 */
    { (ASN_TAG_CLASS_UNIVERSAL | (27 << 2)), 2, 0, 1 }, /* dataHoraCargaat 175 */
    { (ASN_TAG_CLASS_UNIVERSAL | (27 << 2)), 3, -1, 0 } /* codigoCargaat 176 */
};
asn_SEQUENCE_specifics_t asn_SPC_ModuloRegistroDigitalVoto_Carga_specs_1 = {
	sizeof(struct ModuloRegistroDigitalVoto_Carga),
	offsetof(struct ModuloRegistroDigitalVoto_Carga, _asn_ctx),
	asn_MAP_ModuloRegistroDigitalVoto_Carga_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ModuloRegistroDigitalVoto_Carga = {
	"Carga",
	"Carga",
	&asn_OP_SEQUENCE,
	asn_DEF_ModuloRegistroDigitalVoto_Carga_tags_1,
	sizeof(asn_DEF_ModuloRegistroDigitalVoto_Carga_tags_1)
		/sizeof(asn_DEF_ModuloRegistroDigitalVoto_Carga_tags_1[0]), /* 1 */
	asn_DEF_ModuloRegistroDigitalVoto_Carga_tags_1,	/* Same as above */
	sizeof(asn_DEF_ModuloRegistroDigitalVoto_Carga_tags_1)
		/sizeof(asn_DEF_ModuloRegistroDigitalVoto_Carga_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ModuloRegistroDigitalVoto_Carga_1,
	4,	/* Elements count */
	&asn_SPC_ModuloRegistroDigitalVoto_Carga_specs_1	/* Additional specs */
};

