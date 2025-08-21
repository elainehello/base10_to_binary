#include "ft_printf.h"

int	ft_put_unbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_put_unbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
	count++;
	return (count);
}

/*int main()
{
	int nbr = 0;
	ft_put_unbr(nbr);
}*/