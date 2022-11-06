#include "decoder/bu/GeneralString.h"
#include <assert.h>

char *get_string_from_octet(GeneralString_t s)
{
    char *str = calloc(s.size, sizeof(char));
    assert(str != NULL);

    memset(str, 0, sizeof(str)/sizeof(char));

    for(size_t i = 0; i < s.size; i++) {
        str[i] = (char)s.buf[i];
    }

    return str;
}

char *get_hex_string_from_octet(GeneralString_t s)
{
    char *str = calloc(s.size, sizeof(char));
    assert(str != NULL);

    memset(str, 0, sizeof(str)/sizeof(char));

    for(size_t i = 0; i < s.size; i += 2) {
        snprintf(&str[i], 3, "%.2x", s.buf[i]);
    }

    return str;  
}