/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloBU"
 * 	found in "../../../asn/bu.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#include "ModuloBU_IDEleitoral.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ModuloBU_IDEleitoral_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_ModuloBU_IDEleitoral_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_ModuloBU_IDEleitoral_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloBU_IDEleitoral, choice.idProcessoEleitoral),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ModuloBU_IDProcessoEleitoral,
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
		"idProcessoEleitoral"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloBU_IDEleitoral, choice.idPleito),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ModuloBU_IDPleito,
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
		"idPleito"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ModuloBU_IDEleitoral, choice.idEleicao),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ModuloBU_IDEleicao,
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
};
static const asn_TYPE_tag2member_t asn_MAP_ModuloBU_IDEleitoral_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* idProcessoEleitoralat 244 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* idPleitoat 245 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 } /* idEleicaoat 247 */
};
asn_CHOICE_specifics_t asn_SPC_ModuloBU_IDEleitoral_specs_1 = {
	sizeof(struct ModuloBU_IDEleitoral),
	offsetof(struct ModuloBU_IDEleitoral, _asn_ctx),
	offsetof(struct ModuloBU_IDEleitoral, present),
	sizeof(((struct ModuloBU_IDEleitoral *)0)->present),
	asn_MAP_ModuloBU_IDEleitoral_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ModuloBU_IDEleitoral = {
	"IDEleitoral",
	"IDEleitoral",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ModuloBU_IDEleitoral_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ModuloBU_IDEleitoral_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_ModuloBU_IDEleitoral_1,
	3,	/* Elements count */
	&asn_SPC_ModuloBU_IDEleitoral_specs_1	/* Additional specs */
};
