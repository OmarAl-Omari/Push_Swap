#include "stack.h"
#include "counter.h"

/*
	Firt node we do nothing (return calculate_ra)
	if (a > B->top) return (0)

	else if () calcluate the shift up

*/

static int	calculate_index(int a, t_stack *B)
{
	int		i;
	t_node	*node;

	i = 0;
	node = B->top;
	while (node && node->data > a)
	{
		i++;
		node = node->next;
	}
	return (i);
}

static void	rotate(t_stack *B, int index, t_counter c[OP_COUNT], int mod)
{
	int	i;

	i = 0;
	if (index == B->size)
		return ;
	if (index <= B->size / 2)
	{
		while (i++ < index)
		{
			if(mod)
				rb(B, c);
			else
				rrb(B, c);
		}
	}
	else
	{
		while (i++ < B->size - index)
		{
			if (mod)
				rrb(B, c);
			else
				rb(B,c);
		}
	}
}

void	insertion_sort(t_stack *A, t_stack *B, t_counter c[OP_COUNT])
{
	int	index;

	while (A->top)
	{
		index = calculate_index(A->top->data, B);
		if (B->size && index != B->size)
			rotate(B, index, c, 1);
		pb(A, B, c);
		if (B->size > 1 && index != B->size)
			rotate(B, index, c, 0);
	}
	while (B->top)
		pa(A, B, c);
}

		
		//Find the position (see how many numbers are under the postion and up the postion)
		//NUM1: Take the min if (up is min: shift up else shift down) with the same amount that was calculated
		//NUM2: DO the opposite but + 1 //(if up == 0 down ==0)

