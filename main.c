#include "./includes/helper.h"
#include "./includes/stack.h"

int	main(int n, char **args)
{
	t_stack	*A;
	t_stack	*B;
	int		flag;

	flag = push_all_to_stack(A, args, n);
	free_stack(A);
	return (0);
}