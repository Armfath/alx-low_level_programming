#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif /*_MAIN_H*/
