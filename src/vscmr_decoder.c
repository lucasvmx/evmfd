#include "vscmr_decoder.h"
#include "ModeloUrna.h"
#include "util.h"

EntidadeAssinaturaResultado_t *decode_vscmr(const char *filename)
{
    EntidadeAssinaturaResultado_t *ent = NULL;
    EVMFD_FILE *bf = evmfd_read_bin_file(filename);
    asn_dec_rval_t val;

    printf("[*] file size: %lu\n", bf->data_size);
    printf("[*] decoding %s\n", asn_DEF_EntidadeAssinatura.name);

    val = asn_DEF_EntidadeAssinaturaResultado.op->ber_decoder(0,&asn_DEF_EntidadeAssinaturaResultado,(void**)&ent,bf->bin_data,bf->data_size,0);
    if(val.code != RC_OK) {
        printf("[!] couldn't decode '%s': %d\n", asn_DEF_EntidadeAssinaturaResultado.name, val.code);
        asn_DEF_EntidadeAssinaturaResultado.op->free_struct(&asn_DEF_EntidadeAssinaturaResultado,0,ASFM_FREE_EVERYTHING);
        return NULL;
    }

    printf("[*] vscmr decoding ok. %d bytes decoded\n", bf->data_size);

    return ent;
}

static const char *get_vm_model_name(ModeloUrna_t model)
{
    switch(model)
    {
        case ModeloUrna_ue2009: return "UE2009";
        case ModeloUrna_ue2010: return "UE2010";
        case ModeloUrna_ue2011: return "UE2011";
        case ModeloUrna_ue2013: return "UE2013";
        case ModeloUrna_ue2015: return "UE2015";
        case ModeloUrna_ue2020: return "UE2020";
    }
}

void print_voting_machine_model(const char *filename)
{
    char *data = NULL;
    int dia = 0, mes = 0, ano = 0, hora = 0, min = 0, segundo = 0;

    EntidadeAssinaturaResultado_t *signature = decode_vscmr(filename);    
    assert(signature != NULL);

    data = get_string_from_octet(signature->assinaturaSW.dataHoraCriacao);
    sscanf(data, "%04d%02d%02dT%02d%02d%02d",&ano,&mes,&dia,&hora,&min,&segundo);
    printf("data: %d/%d/%d,%d:%d:%d\n", dia,mes,ano,hora,min,segundo);
    printf("modelo: %s\n", get_vm_model_name(signature->modeloUrna));

    free(data);
}
