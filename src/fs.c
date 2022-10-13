#include <stdio.h>
#include <fcntl.h>
#include <assert.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include "fs.h"

#define TEXT 0
#define BINARY 1

static EVMFD_FILE *evmfd_file_init(__u_long size, __u_short binary)
{
    EVMFD_FILE *bf = NULL;

    bf = (EVMFD_FILE*)calloc(1, sizeof(EVMFD_FILE));
    assert(bf != NULL);
    bf->data_size = 0;

    if(binary) {
        bf->bin_data = (unsigned char*)calloc(size, sizeof(unsigned char));
        bf->data = NULL;
        assert(bf->bin_data != NULL);
    } else {
        bf->data = (char *)calloc(size, sizeof(char));
        bf->bin_data = NULL;
        assert(bf->data != NULL);
    }

    return bf;
}

void evmfd_file_close(EVMFD_FILE **f)
{
    if((*f)->data != NULL) {
        free((*f)->data);
        (*f)->data = NULL;
    } else {
        free((*f)->bin_data);
        (*f)->bin_data = NULL;
    }

    free(*f);
    (*f) = NULL;
}

EVMFD_FILE *evmfd_read_bin_file(const char *filename)
{
    int fd = -1;
    struct stat file_info;
    EVMFD_FILE *file = NULL;

    assert(stat(filename, &file_info) == 0);

    fd = open(filename, O_RDONLY);
    assert(fd != -1);

    file = evmfd_file_init(file_info.st_size, BINARY);
    
    int n = 0, index = 0;
    unsigned char chunk[1024];

    // Lê o arquivo em partes pequenas
    do {
        n = read(fd, &chunk, sizeof(chunk));
        if(n) {
            memcpy(&file->bin_data[index], chunk, n);
            index += n;
        }
    } while(n > 0);

    file->data_size = index;

    close(fd);

    return file;
}
