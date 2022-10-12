#ifndef BU_DECODER_H
#define BU_DECODER_H

#include "decoder/bu/EntidadeBoletimUrna.h"

/**
 * @brief 
 * 
 * @param bu_filename 
 * @return EntidadeBoletimUrna_t* 
 */
EntidadeBoletimUrna_t *decode_bu(const char *bu_filename);

/**
 * @brief 
 * 
 * @param bu 
 */
void print_bu(EntidadeBoletimUrna_t *bu);

#endif