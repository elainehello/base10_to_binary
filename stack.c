#include "binary.h"

int binary_push(t_binary *bin, int *bit)
{
    if (bin->size >= MAX_BITS) // if true (overflow)
        return (EXIT_FAILURE);
    bin->bits[bin->size++] = bit;
    return (EXIT_SUCCESS);
}

int binary_pop(t_binary *bin, int *bit)