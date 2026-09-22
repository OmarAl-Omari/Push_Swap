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

void	ra(t_stack *a, t_counter c[OP_COUNT]);
void	rb(t_stack *b, t_counter c[OP_COUNT]);
void	rr(t_stack *a, t_stack *b, t_counter c[OP_COUNT]);
