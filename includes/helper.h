#ifndef HELPER_H

# define HELPER_H

#include <stdlib.h>

int		range_check(char *str);
int		ft_strlen(const char *s);
int		ft_atoi(const char *nptr);
int		ft_strcmp(const char *s1, const char *s2);
char	**ft_split(char const *s, char c);
int	push_all_to_stack(t_stack *A, char **args, int n);

#endif