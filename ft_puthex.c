#include "ft_printf.h"

static int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_puthex(unsigned long n, char format)
{
	char			*base;
	unsigned int	base_len;
	unsigned int	num;
	int				count;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	num = (unsigned int)n;
	base_len = ft_strlen(base);
	if (num >= base_len)
	{
		count += ft_puthex(num / base_len, format);
	}
	ft_putchar(base[num % base_len]);
	count++;
	return (count);
}

/*int main()
{
	char *str = "12";
	ft_puthex((unsigned long)&str, 'X');
}*/
