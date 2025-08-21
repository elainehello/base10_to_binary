#include "binary.h"
#include "ft_printf.h"

int main(int argc, char **argv)
{
    int result;
    t_binary bin;
    int i;

    if (argc <= 1)
    {
        ft_printf("Usage: %s <number>\n", argv[0]);
        return (EXIT_FAILURE);
    }
    ft_printf("input:");
    result = atoi_ascii(argv[1]);
    ft_printf("\n%d\n", result);
    ft_printf("decimal to binary expression:\n");
    bin.size = 0;
    i = 0;
    if (decimal_to_binary(result, &bin) == EXIT_SUCCESS)
    {
        i = bin.size - 1;
        while (i >= 0)
        {
            ft_printf("%d", bin.bits[i]);
            i--;
        }
        ft_printf("\n");
    }
    return (0);
}
