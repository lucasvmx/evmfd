/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuloRegistroDigitalVoto"
 * 	found in "../../../asn/rdv.asn1"
 * 	`asn1c -fline-refs -fcompound-names -fincludes-quoted`
 */

#ifndef	_ModuloRegistroDigitalVoto_CodigoCargoConsulta_H_
#define	_ModuloRegistroDigitalVoto_CodigoCargoConsulta_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ModuloRegistroDigitalVoto_CargoConstitucional.h"
#include "ModuloRegistroDigitalVoto_NumeroCargoConsultaLivre.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ModuloRegistroDigitalVoto_CodigoCargoConsulta_PR {
	ModuloRegistroDigitalVoto_CodigoCargoConsulta_PR_NOTHING,	/* No components present */
	ModuloRegistroDigitalVoto_CodigoCargoConsulta_PR_cargoConstitucional,
	ModuloRegistroDigitalVoto_CodigoCargoConsulta_PR_numeroCargoConsultaLivre
} ModuloRegistroDigitalVoto_CodigoCargoConsulta_PR;

/* ModuloRegistroDigitalVoto_CodigoCargoConsulta */
typedef struct ModuloRegistroDigitalVoto_CodigoCargoConsulta {
	ModuloRegistroDigitalVoto_CodigoCargoConsulta_PR present;
	union ModuloRegistroDigitalVoto_CodigoCargoConsulta_u {
		ModuloRegistroDigitalVoto_CargoConstitucional_t	 cargoConstitucional;
		ModuloRegistroDigitalVoto_NumeroCargoConsultaLivre_t	 numeroCargoConsultaLivre;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ModuloRegistroDigitalVoto_CodigoCargoConsulta_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ModuloRegistroDigitalVoto_CodigoCargoConsulta;
extern asn_CHOICE_specifics_t asn_SPC_ModuloRegistroDigitalVoto_CodigoCargoConsulta_specs_1;
extern asn_TYPE_member_t asn_MBR_ModuloRegistroDigitalVoto_CodigoCargoConsulta_1[2];
extern asn_per_constraints_t asn_PER_type_ModuloRegistroDigitalVoto_CodigoCargoConsulta_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ModuloRegistroDigitalVoto_CodigoCargoConsulta_H_ */
#include "asn_internal.h"
