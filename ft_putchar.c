#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

/*int main()
{
	int char1 = 62;
	char char2 = 'A';
	printf("%d\n", ft_putchar(char1));
	printf("%d\n", ft_putchar(char2));
	return (0);
}*/
