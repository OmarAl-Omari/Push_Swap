/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:52:19 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/26 14:54:34 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"
#include "../includes/helper.h"

static int	is_space(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

static void	str_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static int	check_and_itoa(char *str, t_stack *A)
{
	int		n;
	t_node	*t;

	if (range_check(str))
	{
		free_stack(A);
		write(2, "Error\n", 6);
		exit(0);
	}
	n = ft_atoi(str);
	t = A->top;
	while (t)
	{
		if (t->data == n)
		{
			free_stack(A);
			write(2, "Error\n", 6);
			exit(1);
		}
		t = t->next;
	}
	return (n);
}

static void	add_stack_a(t_stack *A, char *s)
{
	char	**str;
	int		i;
	int		num;

	str = NULL;
	i = 0;
	if (is_space(s))
	{
		str = ft_split(s, ' ');
		while (str[i])
		{
			num = check_and_itoa(str[i], A);
			push(A, create_node(num));
			i++;
		}
		str_free(str);
		return ;
	}
	num = check_and_itoa(s, A);
	push(A, create_node(num));
}

int	push_all_to_stack(t_stack *A, char **args, int n)
{
	int	flag;
	int	i;

	if (n == 1)
		exit(1);
	i = 1;
	flag = 0;
	while (i < n)
	{
		if (args[i][0] == '-' && args[i][1] == '-')
			flag = error(args[i], A);
		else
		{
			error(args[i], A);
			add_stack_a(A, args[i]);
		}
		i++;
	}
	return (flag);
}
