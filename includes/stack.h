/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:55:17 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/22 12:12:15 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <unistd.h>
# include "counter.h"

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*tail;
	int		size;
}	t_stack;

t_node	*create_node(int data);
t_stack	*create_stack(void);
void	push(t_stack *stack, t_node *new);
t_node	*pop(t_stack *stack);
void	free_stack(t_stack *stack);

void	sa(t_stack *a, t_counter c[OP_COUNT]);
void	sb(t_stack *b, t_counter c[OP_COUNT]);
void	ss(t_stack *a, t_stack *b, t_counter c[OP_COUNT]);

void	pa(t_stack *a, t_stack *b, t_counter c[OP_COUNT]);
void	pb(t_stack *a, t_stack *b, t_counter c[OP_COUNT]);

void	ra(t_stack *a, t_counter c[OP_COUNT]);
void	rb(t_stack *b, t_counter c[OP_COUNT]);
void	rr(t_stack *a, t_stack *b, t_counter c[OP_COUNT]);

void	rra(t_stack *a, t_counter c[OP_COUNT]);
void	rrb(t_stack *b, t_counter c[OP_COUNT]);
void	rrr(t_stack *a, t_stack *b, t_counter c[OP_COUNT]);

int		push_all_to_stack(t_stack *A, char **args, int n);
int		error(char *str, t_stack *stack);

void	insertion_sort(t_stack *A, t_stack *B, t_counter c[OP_COUNT]);

#endif
