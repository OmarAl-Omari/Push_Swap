#include "includes/stack.h"
#include "includes/helper.h"
#include "includes/counter.h"
#include "includes/benchmark.h"
#include <stdio.h>
#include <unistd.h>

void	print_counter(t_counter counter[OP_COUNT])
{
	int	i;

	i = 0;
	while (i < OP_COUNT)
	{
		printf("%s:\t", counter[i].name);
		printf("%d\t", counter[i].count);
		if (i == 4)
			printf("\n");
		i++;
	}
}

void	print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	t_node *temp;
	t_node	*temp2;
	
	temp = stack_a->top;
	temp2 = stack_b->top;
	while (temp)
	{
		printf("%d\t", temp->data);
		if (temp2)
		{
			printf("%d", temp2->data);
			temp2 = temp2->next;
		}
		printf("\n");
		temp = temp->next;
	}
	printf("--\t--\n");
	printf("a\tb\n");
}

int	main(int n, char **args)
{
	t_stack	*A;
	t_stack	*B;
	t_counter counters[OP_COUNT];

	A = create_stack();
	B = create_stack();
	push_all_to_stack(A, args, n);
	// print_stacks(A, B);

	init_counters(counters);

	insertion_sort(A, B, counters);
	print_stacks(A, B);

	print_counter(counters);

	print_bench(A, "Adaptive / O(n√n)", counters);
	free_stack(A);
	return (0);
}
