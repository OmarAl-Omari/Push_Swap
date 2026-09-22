/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:19:30 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/22 12:20:17 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stack.h"

void	rra(t_stack *a, t_counter c[OP_COUNT]);
void	rrb(t_stack *b, t_counter c[OP_COUNT]);
void	rrr(t_stack *a, t_stack *b, t_counter c[OP_COUNT]);
