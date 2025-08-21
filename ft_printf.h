#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_detect_format(const char format, va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_ptr_address(void *format);
int		ft_putnbr(int n);
int		ft_put_unbr(unsigned int n);
int		ft_puthex(unsigned long n, char format);

#endif