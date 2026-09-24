#include "./includes/helper.h"
#include "./includes/stack.h"

static flag_option(int flag, t_counter c[OP_COUNT], t_stack *A, t_stack *B)
{
	int	t;

	t = flag - 100;
	if (t > 0)
	{
		if ()
	}
}

int	main(int n, char **args)
{
	t_stack	*A;
	t_stack	*B;
	t_counter counters[OP_COUNT];
	int		flag;

	A = create_stack();
	flag = push_all_to_stack(A, args, n);
	init_counters(counters);
	free_stack(A);
	return (0);
}