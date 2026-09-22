/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakahle <wmakahle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 18:44:12 by wmakahle          #+#    #+#             */
/*   Updated: 2026/09/12 18:44:17 by wmakahle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_handel(char c, va_list *args)
{
	void	*p;

	if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'p')
	{
		p = va_arg(*args, void *);
		if (!p)
			return (write(1, "(nil)", 5));
		write(1, "0x", 2);
		return (ft_putaddress((unsigned long)p) + 2);
	}
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(*args, unsigned int)));
	else if (c == 'x')
		return (ft_puthexlow(va_arg(*args, unsigned int)));
	else if (c == 'X')
		return (ft_puthexupp(va_arg(*args, unsigned int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			count += format_handel(format[i + 1], &args);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
			count += ft_putchar(format[i++]);
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
