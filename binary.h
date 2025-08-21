#ifndef BINARY_H
#define BINARY_H

#include <limits.h>
#include <stdlib.h>

// Upper bound for binary representation of an int
#define MAX_BITS (CHAR_BIT * sizeof(int))

// Data structure for binary numbers
typedef struct s_binary {
    int bits[MAX_BITS]; // Array holding binary digits (each 0 or 1)
    int size;
} t_binary;

int binary_push(t_binary *bin, int *bit);
int binary_pop(t_binary *bin, int *bit);
int decimal_to_binary(int n, t_binary *bin);


#endif