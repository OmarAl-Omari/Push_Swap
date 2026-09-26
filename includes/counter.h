/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:13:46 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/22 12:17:21 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef COUNTER_H
# define COUNTER_H

typedef struct s_counter
{
	char	*name;
	int		count;
}	t_counter;

typedef enum e_operation
{
	OP_SA,
	OP_SB,
	OP_SS,
	OP_PA,
	OP_PB,
	OP_RA,
	OP_RB,
	OP_RR,
	OP_RRA,
	OP_RRB,
	OP_RRR,
	OP_COUNT
}	t_operation;

void	init_counters(t_counter counters[OP_COUNT]);
int		total_operations(t_counter counters[OP_COUNT]);
#endif
