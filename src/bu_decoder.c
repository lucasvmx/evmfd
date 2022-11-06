#include "bu_decoder.h"
#include "fs.h"
#include "decoder/bu/EntidadeEnvelopeGenerico.h"
#include "decoder/bu/ber_decoder.h"
#include "util.h"

EntidadeBoletimUrna_t *decode_bu(const char *bu_filename)
{
    EntidadeEnvelopeGenerico_t *ent = NULL;
    EVMFD_FILE *bf = evmfd_read_bin_file(bu_filename);
    asn_dec_rval_t val;

    printf("[*] file size: %lu\n", bf->data_size);
    printf("[*] decoding %s\n", asn_DEF_EntidadeEnvelopeGenerico.name);

    val = asn_DEF_EntidadeEnvelopeGenerico.op->ber_decoder(0,&asn_DEF_EntidadeEnvelopeGenerico,(void**)&ent, bf->bin_data, bf->data_size,0);
    if(val.code != RC_OK) {
        printf("[!] couldn't decode '%s': %d\n", asn_DEF_EntidadeEnvelopeGenerico.name, val.code);
        asn_DEF_EntidadeEnvelopeGenerico.op->free_struct(&asn_DEF_EntidadeEnvelopeGenerico,0,ASFM_FREE_EVERYTHING);

        return NULL;
    }

    printf("[+] %s decode ok (%u bytes decoded)\n",asn_DEF_EntidadeEnvelopeGenerico.name,ent->conteudo.size);

    OCTET_STRING_t *bu_encoded = &ent->conteudo;
    EntidadeBoletimUrna_t *ebu = 0;

    printf("[*] decoding %s\n", asn_DEF_EntidadeBoletimUrna.name);
    val = asn_DEF_EntidadeBoletimUrna.op->ber_decoder(0,&asn_DEF_EntidadeBoletimUrna,(void**)&ebu,bu_encoded->buf,bu_encoded->size,0);
    if(val.code != RC_OK) {
        printf("[!] couldn't decode '%s': %d\n", asn_DEF_EntidadeBoletimUrna.name, val.code);
        asn_DEF_EntidadeBoletimUrna.op->free_struct(&asn_DEF_EntidadeBoletimUrna,0,ASFM_FREE_EVERYTHING);
        return NULL;
    }

    printf("[+] bu decoding completed\n");

    return ebu;
}

void print_bu(EntidadeBoletimUrna_t *bu)
{
    ModuloBU_CabecalhoEntidade_t *header;
    ModuloBU_Urna_t *urna;

    assert(bu != NULL);

    header = &bu->cabecalho;
    urna = &bu->urna;
    
    printf("\n");
    printf("Cabecalho:\n");
    printf("  Data geracao: %s\n", get_string_from_octet(header->dataGeracao));
    printf("  Present: %d\n", header->idEleitoral.present);
    printf("  IdEleicao: %d\n", bu->cabecalho.idEleitoral.choice.idEleicao);
    printf("  IdPleito: %d\n",bu->cabecalho.idEleitoral.choice.idPleito);
    printf("  IdProcessoEleitoral: %d\n\n",bu->cabecalho.idEleitoral.choice.idProcessoEleitoral);
    
    printf("dataHoraEmissao: %s\n\n", get_string_from_octet(bu->dataHoraEmissao));

    printf("Urna:\n");
    printf("  numeroSerieFV: %s\n", get_hex_string_from_octet(urna->numeroSerieFV));
    printf("  versaoVotacao: %s\n", get_string_from_octet(urna->versaoVotacao));

    printf("\n");
}
