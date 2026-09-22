/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakahle <wmakahle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 18:21:05 by wmakahle          #+#    #+#             */
/*   Updated: 2026/09/12 18:21:08 by wmakahle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	size;

	if (str == NULL)
		str = "(null)";
	size = 0;
	while (str[size])
		size++;
	write(1, str, size);
	return (size);
}
