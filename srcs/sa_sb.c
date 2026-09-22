/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:18:10 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/22 12:20:17 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stack.h"

static void	swap_first_two(t_stack *stack)
{
	int	temp;

	if (!stack || !stack->top || !stack->top->next)
		return ;
	temp = stack->top->data;
	stack->top->data = stack->top->next->data;
	stack->top->next->data = temp;
}

void	sa(t_stack *a, t_counter c[OP_COUNT])
{
	swap_first_two(a);
	c[OP_SA].count += 1;
}

void	sb(t_stack *b, t_counter c[OP_COUNT])
{
	swap_first_two(b);
	c[OP_SB].count += 1;
}

void	ss(t_stack *a, t_stack *b, t_counter c[OP_COUNT])
{
	swap_first_two(a);
	swap_first_two(b);
	c[OP_SS].count += 1;
}
