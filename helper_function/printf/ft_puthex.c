/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakahle <wmakahle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 18:19:37 by wmakahle          #+#    #+#             */
/*   Updated: 2026/09/12 18:19:38 by wmakahle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlow(unsigned int n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthexlow(n / 16);
	ft_putchar(base[n % 16]);
	count++;
	return (count);
}

int	ft_puthexupp(unsigned int n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthexupp(n / 16);
	ft_putchar(base[n % 16]);
	count++;
	return (count);
}

int	ft_putaddress(unsigned long n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count += ft_putaddress(n / 16);
	ft_putchar(base[n % 16]);
	count++;
	return (count);
}
