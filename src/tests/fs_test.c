#include "../fs.h"
#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char **argv)
{
    BLADE_FILE *f = blade_read_binary_file("/bin/bash");

    struct stat info;

    stat("/bin/bash", &info);

    printf("expected size: %ld\ncurrent size: %ld\n", 
    info.st_size, f->data_size);

    if(info.st_size != f->data_size) {
        blade_file_close(&f);
        return 1;
    }

    return 0;
}