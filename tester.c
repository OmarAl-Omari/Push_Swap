#include "includes/stack.h"
#include <stdio.h>

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

int main()
{
	t_counter counters[OP_COUNT];
	t_stack	*stack_a;
	t_stack *stack_b;
	t_node *temp;
	
	init_counters(counters);	
	printf("\n------------------------------\n");
	stack_a = create_stack();
	stack_b = create_stack();
	
	temp = create_node(8);
	push(stack_a, temp);

	temp = create_node(5);
	push(stack_a, temp);

	temp = create_node(6);
	push(stack_a, temp);

	temp = create_node(3);
	push(stack_a, temp);

	temp = create_node(1);
	push(stack_a, temp);


	temp = create_node(2);
	push(stack_a, temp);

	print_stacks(stack_a, stack_b);
	printf("\n------------------------------\n");
	sa(stack_a, counters);
	print_stacks(stack_a, stack_b);
	printf("\n------------------------------\n");
	pb(stack_a, stack_b, counters);
	pb(stack_a, stack_b, counters);
	pb(stack_a, stack_b, counters);
	print_stacks(stack_a, stack_b);
	printf("\n------------------------------\n");
	ra(stack_a, counters);
	rb(stack_b, counters);
	print_stacks(stack_a, stack_b);
	printf("\n------------------------------\n");
	rra(stack_a, counters);
	rrb(stack_b, counters);
	print_stacks(stack_a, stack_b);
	printf("\n------------------------------\n");
	sa(stack_a, counters);
	print_stacks(stack_a, stack_b);
	printf("\n------------------------------\n");
	pa(stack_a, stack_b, counters);
	pa(stack_a, stack_b, counters);
	pa(stack_a, stack_b, counters);
	print_stacks(stack_a, stack_b);

	print_counter(counters);
	return (0);
}
