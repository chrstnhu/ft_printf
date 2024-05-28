# include <stdarg.h>

int	ft_printf_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf_dec(int num)
{
	int		count;
	char	*symbol;

	symbol = "0123456789ABCDEF";
	count = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		count += 11;
	}
	else if (num < 0)
	{
		count += ft_printf_char('-');
		count += ft_printf_dec((num * -1));
	}
	else if (num < 10)
		count += ft_printf_char(symbol[num]);
	else
	{
		count += ft_printf_dec(num / 10);
		count += ft_printf_dec(num % 10);
	}
	return (count);
}

int	ft_printf_dec_uns(unsigned int num)
{
	unsigned int	count;
	char			*symbol;

	symbol = "0123456789ABCDEF";
	count = 0;
	if (num < 10)
		count += ft_printf_char(symbol[num]);
	else
	{
		count += ft_printf_dec(num / 10);
		count += ft_printf_dec(num % 10);
	}
	return (count);
}

int	ft_printf_hex_min(unsigned int num)
{
	int		count;
	char	*symbol;

	symbol = "0123456789abcdef";
	count = 0;
	if (num < 16)
		return (ft_printf_char(symbol[num]));
	else
	{
		count = ft_printf_hex_min(num / 16);
		count += ft_printf_hex_min(num % 16);
	}
	return (count);
}

int	ft_printf_hex_max(unsigned int num)
{
	int		count;
	char	*symbol;

	symbol = "0123456789ABCDEF";
	count = 0;
	if (num < 16)
		return (ft_printf_char(symbol[num]));
	else
	{
		count = ft_printf_hex_max(num / 16);
		count += ft_printf_hex_max(num % 16);
	}
	return (count);
}

void	convert_address_to_hex(unsigned long adr, char hex[], int *count)
{
	int		i;
	int		remainder;
	char	hex_char;

	i = 0;
	while (adr > 0)
	{
		remainder = adr % 16;
		if (remainder < 10)
			hex_char = remainder + '0';
		else
			hex_char = remainder - 10 + 'a';
		hex[i++] = hex_char;
		adr /= 16;
	}
	while (i > 0)
	{
		ft_printf_char(hex[--i]);
		(*count)++;
	}
}

int	ft_printf_ptr(void const *p)
{
	unsigned long	ptr;
	char			hex[16];
	int				count;

	ptr = (unsigned long)p;
	count = 0;
	if (ptr == 0)
	{
		ft_printf_str("(nil)");
		count += 5;
	}
	else
	{
		ft_printf_str("0x");
		count += 2;
		convert_address_to_hex(ptr, hex, &count);
	}
	return (count);
}

int	ft_printf_str(char *str)
{	
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (ft_printf_str("(null)"));
	}
	while (str[i] != '\0')
	{
		ft_printf_char (str[i]);
		i++;
	}
	return (i);
}

int	ft_printf_arg(char type, va_list args)
{
	int	i;

	i = 0;
	if (type == 'c')
		i += ft_printf_char(va_arg(args, int));
	else if (type == 's')
		i += ft_printf_str(va_arg(args, char *));
	else if (type == 'p')
		i += ft_printf_ptr(va_arg(args, void *));
	else if (type == 'd' || type == 'i')
		i += ft_printf_dec(va_arg(args, int));
	else if (type == 'u')
		i += ft_printf_dec_uns(va_arg(args, unsigned int));
	else if (type == 'x')
		i += ft_printf_hex_min(va_arg(args, unsigned int));
	else if (type == 'X')
		i += ft_printf_hex_max(va_arg(args, unsigned int));
	else if (type == '%')
		i += write(1, "%", 1);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, s);
	if (s == NULL)
		return (-1);
	while (s[i])
	{
		if (s[i] == '%')
		{
			count += ft_printf_arg(s[i + 1], args);
			i++;
		}
		else
			count += ft_printf_char(s[i]);
		i++;
	}
	va_end (args);
	return (count);
}
