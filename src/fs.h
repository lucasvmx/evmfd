#ifndef FS_H
#define FS_H

#include <sys/types.h>

typedef struct evmfd_file {
    char *data;
    unsigned char *bin_data;
    __u_long data_size;
} EVMFD_FILE;

EVMFD_FILE *evmfd_read_bin_file(const char *filename);
void evmfd_file_close(EVMFD_FILE **f);

#endif
