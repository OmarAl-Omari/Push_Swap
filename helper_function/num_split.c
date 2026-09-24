#include <stdlib.h>

static int	word_counter(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

static int	word_size(char *s, char c, int n)
{
	int	i;
	int	size;
	int	indx;

	indx = 0;
	i = 0;
	while (s[i])
	{
		size = 0;
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i] && s[i] != c)
		{
			i++;
			size++;
		}
		if (indx == n)
			return (size);
		indx++;
	}
	return (0);
}

static char	**split_it(char *s, char c, char **spli)
{
	int	i;
	int	j;
	int	v;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		v = 0;
		while (s[i] && s[i] != c)
		{
			spli[j][v] = s[i];
			i++;
			v++;
		}
		spli[j][v] = '\0';
		j++;
	}
	return (spli);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		wconter;
	int		i;

	wconter = word_counter((char *)s, c);
	res = malloc((wconter + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < wconter)
	{
		res[i] = malloc((word_size((char *)s, c, i) * sizeof(char)) + 1);
		if (!res[i])
		{
			while (i > 0)
				free(res[--i]);
			free(res);
			return (NULL);
		}
		i++;
	}
	res[wconter] = NULL;
	return (split_it((char *)s, c, res));
}
