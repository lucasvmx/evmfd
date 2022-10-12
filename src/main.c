#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include "bu_decoder.h"

void show_usage(char **argv)
{
    fprintf(stderr, "Usage: %s [options]\n", argv[0]);
    fprintf(stderr, "Where options are:\n");
    fprintf(stderr, "  -b <filename>    electronic voting machine (.bu) filename\n");
    exit(1);
}

int main(int argc, char **argv)
{
    int opt;
    short has_filename = 0;
    char filename[128];

    while((opt = getopt(argc, argv, "b:")) != -1) 
    {
        switch(opt) {
            case 'b':
                has_filename = 1;
                strncpy(filename, optarg, sizeof(filename)/sizeof(char));
            break;
        }
    }

    printf("[*] starting decoding of file %s\n", filename);

    if(!has_filename) {
        show_usage(argv);
    }

    if(access(filename, 0) == -1) {
        printf("[!] file not found: %s\n", filename);
        exit(2);
    }

    EntidadeBoletimUrna_t *ebu = decode_bu(filename);
    if(ebu != NULL) {
        print_bu(ebu);
    }

    return 1;
}