#include "ft_printf.h"

int	ft_detect_format(const char format, va_list args)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		length += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		length += ft_ptr_address(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		length += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		length += ft_put_unbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length += ft_puthex(va_arg(args, unsigned long), format);
	else if (format == '%')
		length += ft_putchar('%');
	else
		return (-1);
	return (length);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		length;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	length = 0;
	while (format[count] != '\0')
	{
		if (format[count] == '%')
		{
			count++;
			length += ft_detect_format(format[count], args);
		}
		else
			length += ft_putchar(format[count]);
		count++;
	}
	va_end(args);
	return (length);
}

/*int main()
{
	char *p;

	ft_printf("Hello World!\n");
	printf("Hello World!\n");
	ft_printf(" [wc: %d]\n", ft_printf("Hello World!"));
	printf(" [wc: %d]\n", printf("Hello World!"));
	ft_printf(" [wc: %d]\n", ft_printf("test char: %c %c %c %c", 'H', 'o', 'l', 'a'));
	printf(" [wc: %d]\n", printf("test char: %c %c %c %c", 'H', 'o', 'l', 'a'));
	ft_printf(" [wc: %d]\n", ft_printf("test decimal: %d", 1234567890));
	printf(" [wc: %d]\n", printf("test decimal: %d", 1234567890));
	ft_printf(" [wc: %d]\n", ft_printf("test integer: %i", 1234567890));
	printf(" [wc: %d]\n", printf("test integer: %i", 1234567890));
	ft_printf(" [wc: %d]\n", ft_printf("%%"));
	printf(" [wc: %d]\n", printf("%%"));
	ft_printf(" [wc: %d]\n", ft_printf("test pointer address: %p", &p));
	printf(" [wc: %d]\n", printf("test pointer address: %p", &p));
	ft_printf(" [wc: %d]\n", ft_printf("Hexadecimal lowercase: %x", -16));
	printf(" [wc: %d]\n", printf("Hexadecimal lowercase: %x", -16));
	ft_printf(" [wc: %d]\n", ft_printf("Hexadecimal uppercase: %X", -16));
	printf(" [wc: %d]\n", printf("Hexadecimal uppercase: %X", -16));
	ft_printf(" [wc: %d]\n", ft_printf("decimal: %d %d %d", 15, 16, 17));
	printf(" [wc: %d]\n", printf("decimal: %d %d %d", 15, 16, 17));
	ft_printf(" [wc: %d]\n", ft_printf("integer: %i %i %i", 15, 16, 17));
	printf(" [wc: %d]\n", printf("integer: %i %i %i", 15, 16, 17));
	ft_printf(" [wc: %d]\n", ft_printf("%p", (void *)-12345));
	printf(" [wc: %d]\n", printf("%p", (void *)-12345));
	ft_printf(" [wc: %d]\n", ft_printf("%p", (void *) NULL));
	printf(" [wc: %d]\n", printf("%p", (void *) NULL));
	return (0);
}*/