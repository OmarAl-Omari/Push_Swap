/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakahle <wmakahle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:31:25 by wmakahle          #+#    #+#             */
/*   Updated: 2026/09/22 20:41:37 by wmakahle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

int	is_string_num(char *str)
{
	int	i;
	int	num;

	if (!str)
		return (0);
	num = 0;
	i = 0;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		if (!str[i])
			break ;
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		num = 1;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] && !((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
			return (0);
	}
	return (num);
}

int	is_flag(char *str)
{
	static int	bench;
	static int	duplicate;

	if (ft_strcmp(str, "--simple") == 0 || 
		ft_strcmp(str, "--medium") == 0 || 
		ft_strcmp(str, "--complex") == 0 || 
		ft_strcmp(str, "--adaptive") == 0)
	{
		if (duplicate)
			return (0);
		duplicate = 1;
		return (1);
	}
	if (ft_strcmp(str, "--bench") == 0)
	{
		if (bench)
			return (0);
		bench = 0;
		return (1);
	}
	return (0);
}

int	range_check(char *str)
{
	int		i;
	int		v;
	char	*limit;

	i = 0;
	if (str[0] == '-')
	{
		limit = "2147483648";
		i = 1;
		if (ft_strlen(str) > 11)
			return (0);
	}
	else
		limit = "2147483647";
	if (ft_strlen(str) > 10)
		return (0);
	v = 0;
	while (str[i])
	{
		if ((str[i] - str[v]) < 0)
			return (0);
		i++;
		v++;
	}
}

int	is_dup();
