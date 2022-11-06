#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include "bu_decoder.h"
#include "vscmr_decoder.h"

void show_usage(char **argv)
{
    fprintf(stderr, "Usage: %s [options]\n", argv[0]);
    fprintf(stderr, "Where options are:\n");
    fprintf(stderr, "  -b <filename>    electronic voting machine (.bu) filename\n");
    fprintf(stderr, "  -v <filename>    electronic voting machine (.vscmr) filename\n");
    exit(1);
}

int main(int argc, char **argv)
{
    int opt;
    short has_filename = 0;
    short has_vscmr_filename = 0;
    char filename[128];

    while((opt = getopt(argc, argv, "b:v:")) != -1) 
    {
        switch(opt) {
            case 'b':
                has_filename = 1;
                strncpy(filename, optarg, sizeof(filename)/sizeof(char));
            break;

            case 'v':
                has_vscmr_filename = 1;
                strncpy(filename, optarg, sizeof(filename)/sizeof(char));
            break;
        }
    }

    printf("[*] starting decoding of file %s\n", filename);

    if(!has_filename && !has_vscmr_filename) {
        show_usage(argv);
    }

    if(access(filename, 0) == -1) {
        printf("[!] file not found: %s\n", filename);
        exit(2);
    }

    if(has_filename) {
        EntidadeBoletimUrna_t *ebu = decode_bu(filename);
        if(ebu != NULL) {
            print_bu(ebu);
        }
    } else {
        // decodifica as assinaturas e exibe os dados sobre os modelos das urnas
        print_voting_machine_model(filename);
    }


    return 0;
}