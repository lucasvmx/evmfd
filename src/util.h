#ifndef UTIL_H
#define UTIL_H

#include "decoder/bu/GeneralString.h"

#define COUNT(x) (sizeof(x)/sizeof(x[0]))

char *get_string_from_octet(GeneralString_t s);
char *get_hex_string_from_octet(GeneralString_t s);

#endif
