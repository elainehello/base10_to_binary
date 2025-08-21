#include "ft_printf.h"

static int	ft_strlen(const char *s)
{
	unsigned long	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

static int	ft_print_hex_digit(unsigned long n, const char *base)
{
	unsigned long	base_len;
	int				count;

	count = 0;
	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		count += ft_print_hex_digit(n / base_len, base);
	}
	ft_putchar(base[n % base_len]);
	count++;
	return (count);
}

int	ft_ptr_address(void *format)
{
	unsigned long	n;
	int				count;

	n = (unsigned long)format;
	count = 0;
	if (n == 0)
	{
		count += ft_putstr("(nil)");
	}
	else
	{
		count += ft_putstr("0x");
		count += ft_print_hex_digit(n, "0123456789abcdef");
	}
	return (count);
}

/*int main()
{
	int nbr = 456;
	ft_ptr_address((unsigned long)&nbr);
}*/