/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   benchmark.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:48:41 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/26 14:54:47 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "benchmark.h"
#include "../helper_function/printf_fd/includes/ft_printf.h"

int	total_operations(t_counter counters[OP_COUNT])
{
	size_t	i;
	int		sum;

	sum = 0;
	i = 0;
	while (i < OP_COUNT)
	{
		sum += counters[i].count;
		++i;
	}
	return (sum);
}

float	compute_disorder(t_stack *stack_a)
{
	size_t	mistakes;
	size_t	total_pairs;
	t_node	*i;
	t_node	*j;

	if (!stack_a || !stack_a->top || !stack_a->top->next)
		return (0);
	i = stack_a->top;
	mistakes = 0;
	total_pairs = 0;
	while (i->next)
	{
		j = i->next;
		while (j)
		{
			++total_pairs;
			if (i->data > j->data)
				++mistakes;
			j = j->next;
		}
		i = i->next;
	}
	return ((float)mistakes / total_pairs);
}

void	print_bench(t_stack *stack_a,
		char *strategy, t_counter counters[OP_COUNT])
{
	size_t	i;

	ft_printf("[bench] disorder:\t%f%%\n", compute_disorder(stack_a));
	ft_printf("[bench] strategy:\t%s\n", strategy);
	ft_printf("[bench] total_ops:\t%d\n", total_operations(counters));
	i = 0;
	ft_printf("[bench] ");
	while (i < OP_COUNT)
	{
		ft_printf("%s:\t", counters[i].name);
		ft_printf("%d\t", counters[i].count);
		if (i == 4)
		{
			ft_printf("\n");
			ft_printf("[bench] ");
		}
		i++;
	}
}
