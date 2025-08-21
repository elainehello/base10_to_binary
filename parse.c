#include "binary.h"
#include "ft_printf.h"

int atoi_ascii(const char *argv)
{
    int sign;
    long result;
    int digit;
    int i;

    sign = 1;
    result = 0;
    i = 0;
    // skip space, tab and newline
    while (argv[i] == 32 || argv[i] == 9 || argv[i] == 10)
        i++;
    if (argv[i] == '-' || argv[i] == '+') 
    {
        if (argv[i] == '-')
            sign = -1;
        i++;
    }
    if (argv[i] < '0' || argv[i] > '9')
        return (EXIT_FAILURE);
    digit = 0;
    while (argv[i] > '0' && argv[i] < '9')
    {
        digit = argv[i] - 48;
        if (result > (LONG_MAX - digit) / 10)
            return (EXIT_FAILURE);
        result = result * 10 + digit;
        i++;
    }
    if (argv[i] != '\0')
        return (EXIT_FAILURE);
    result *= sign;
    if (result < INT_MIN || result > INT_MAX)
        return (EXIT_FAILURE);
    return ((int)result);
}


/* int decimal_to_binary(int n, t_binary *bin)
{

} */

int main(int argc, char **argv)
{
    int result;

    if (argc <= 1)
    {
        ft_printf("Usage: %s <number>\n", argv[0]);
        return (EXIT_FAILURE);
    }
    result = atoi_ascii(argv[1]);
    ft_printf("\n%d\n", result);
    return (0);    
}