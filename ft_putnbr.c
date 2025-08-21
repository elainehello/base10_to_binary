#include "ft_printf.h"
#include <limits.h>

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == INT_MIN)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	else if (n == INT_MAX)
	{
		count += ft_putstr("2147483647");
		return (count);
	}
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_putnbr(n / 10);
		n %= 10;
	}
	count += ft_putchar(n + '0');
	return (count);
}
