/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:35:04 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/22 13:39:29 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "counter.h"

void	init_counters(t_counter counters[OP_COUNT])
{
	counters[OP_SA] = {"sa", 0};
	counters[OP_SB] = {"sb", 0};
	counters[OP_SS] = {"ss", 0};
	counters[OP_PA] = {"pa", 0};
	counters[OP_PB] = {"pb", 0};
	counters[OP_RA] = {"ra", 0};
	counters[OP_RB] = {"rb", 0};
	counters[OP_RR] = {"rr", 0};
	counters[OP_RRA] = {"rra", 0};
	counters[OP_RRB] = {"rrb", 0};
	counters[OP_RRR] = {"rrr", 0};
}
