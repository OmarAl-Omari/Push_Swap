/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   benchmark.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oal-omar <oal-omar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 19:40:24 by oal-omar          #+#    #+#             */
/*   Updated: 2026/09/26 19:45:23 by oal-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BENCHMARK_H
# define BENCHMARK_H

# include <stack.h>

int		total_operations(t_counter counters[OP_COUNT]);
float	compute_disorder(t_stack *stack_a);
void	print_bench(t_stack *stack_a, char *strat, t_counter count[OP_COUNT]);

#endif
