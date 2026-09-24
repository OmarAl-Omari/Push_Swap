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

#include "../includes/helper.h"
#include "../includes/stack.h"

static void flag(char *flags[4])
{
	flags[0] = "--simple";
	flags[1] = "--medium";
	flags[2] = "--complex";
	flags[3] = "--adaptive";
}

static int	is_flag(char *str)
{
	static int		bench;
	static int		duplicate;
	char	*flags[4];	
	int			i;

	i = 0;
	flag(flags);
	while (i < 4)
	{
		if (ft_strcmp(str, flags[i]) == 0)
		{
			if (duplicate)
				return (404);
			duplicate = 1;
			return ((1 + i) * 10);	
		}
		i++;
	}
	if (ft_strcmp(str, "--bench") == 0)
	{
		if (bench)
			return (404);
		bench = 1;
		return (100);
	}
	return (404);
}


static int	is_string_num(char *str)
{
	int	i;

	if (!str)
		return (1);
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
			return (1);
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] && !((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
			return (1);
	}
	return (0);
}


int	range_check(char *str)
{
	int		i;
	int		j;
	char	*limit;

	i = 0;
	j = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	if (str[0] == '-')
		limit = "2147483648";
	else
		limit = "2147483647";
	if ((ft_strlen(str) - i) > 10)
		return (1);
	if ((ft_strlen(str) - i) < 10)
		return (0);
	while (str[i])
	{
		if (str[i] != limit[j])
			return (str[i] > limit[j]);
		i++;
		j++;
	}
	return (0);
}

int	Error(char *str, t_stack *stack)
{
	int	flag;
	
	flag = 0;
	if (str[0] == '-' && str[1] == '-')
	{
		flag = (is_flag(str));
		if (flag == 404)
		{
			free_stack(stack);
			write(2, "Error\n", 6);
			exit(1);
		}
	}
	else if (is_string_num(str))
	{
		free_stack(stack);
		write(2, "Error\n", 6);
		exit(1);
	}
	return (flag);
}
