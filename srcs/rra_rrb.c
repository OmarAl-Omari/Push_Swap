/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:19:30 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/26 14:30:16 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stack.h"

static void	shift_down(t_stack *stack)
{
	t_node	*temp;

	if (!stack || !stack->top || !stack->top->next)
		return ;
	temp = stack->tail;
	stack->tail = temp->prev;
	stack->tail->next = NULL;
	stack->top->prev = temp;
	temp->next = stack->top;
	temp->prev = NULL;
	stack->top = temp;
}

void	rra(t_stack *a, t_counter c[OP_COUNT])
{
	shift_down(a);
	c[OP_RRA].count += 1;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b, t_counter c[OP_COUNT])
{
	shift_down(b);
	c[OP_RRB].count += 1;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b, t_counter c[OP_COUNT])
{
	shift_down(a);
	shift_down(b);
	c[OP_RRR].count += 1;
	write(1, "rrr\n", 4);
}
