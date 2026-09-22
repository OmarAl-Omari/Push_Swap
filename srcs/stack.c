/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:16:30 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/22 11:05:17 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stack.h"

t_node	*create_node(int data)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->data = data;
	return (new);
}

t_stack	*create_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->size = 0;
	stack->top = NULL;
	stack->tail = NULL;
	return (stack);
}

void	push(t_stack *stack, t_node *new)
{
	new->next = stack->top;
	new->prev = NULL;
	if (stack->top)
		stack->top->prev = new;
	else
		stack->tail = new;
	stack->top = new;
	stack->size += 1;
}

t_node	*pop(t_stack *stack)
{
	t_node	*temp;

	if (!stack || !stack->top)
		return (NULL);
	temp = stack->top;
	stack->top = temp->next;
	if (stack->top)
		stack->top->prev = NULL;
	else
		stack->tail = NULL;
	stack->size -= 1;
	temp->next = NULL;
	temp->prev = NULL;
	return (temp);
}

void	free_stack(t_stack *stack)
{
	t_node	*temp;

	if (!stack)
		return ;
	while (stack->top)
	{
		temp = stack->top;
		stack->top = temp->next;
		free (temp);
	}
	free (stack);
}
