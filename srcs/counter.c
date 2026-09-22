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
	counters[OP_SA] = (t_counter){"sa", 0};
	counters[OP_SB] = (t_counter){"sb", 0};
	counters[OP_SS] = (t_counter){"ss", 0};
	counters[OP_PA] = (t_counter){"pa", 0};
	counters[OP_PB] = (t_counter){"pb", 0};
	counters[OP_RA] = (t_counter){"ra", 0};
	counters[OP_RB] = (t_counter){"rb", 0};
	counters[OP_RR] = (t_counter){"rr", 0};
	counters[OP_RRA] = (t_counter){"rra", 0};
	counters[OP_RRB] = (t_counter){"rrb", 0};
	counters[OP_RRR] = (t_counter){"rrr", 0};
}
