/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakahle <wmakahle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 18:19:51 by wmakahle          #+#    #+#             */
/*   Updated: 2026/09/12 18:19:53 by wmakahle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	long	n;
	int		count;

	n = num;
	count = 0;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		count++;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	count++;
	return (count);
}

int	ft_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putunbr(n / 10);
	ft_putchar((n % 10) + '0');
	count++;
	return (count);
}
