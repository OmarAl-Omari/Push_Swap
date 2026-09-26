/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:19:11 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/22 12:20:17 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stack.h"

static void	shift_up(t_stack *stack)
{
	t_node	*temp;

	if (!stack || !stack->top || !stack->top->next)
		return ;
	temp = stack->top;
	stack->top = temp->next;
	stack->top->prev = NULL;
	stack->tail->next = temp;
	temp->prev = stack->tail;
	temp->next = NULL;
	stack->tail = temp;
}

void	ra(t_stack *a, t_counter c[OP_COUNT])
{
	shift_up(a);
	c[OP_RA].count += 1;
	write(1, "ra\n", 3);
}

void	rb(t_stack *b, t_counter c[OP_COUNT])
{
	shift_up(b);
	c[OP_RB].count += 1;
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b, t_counter c[OP_COUNT])
{
	shift_up(a);
	shift_up(b);
	c[OP_RR].count += 1;
	write(1, "rr\n", 3);
}
