#include "libft.h"

char	*ft_strstr(const char *str, const char *chr)
{
	int i;
	int j;
	char *tmp = NULL;

	i = 0;
	j = 0;
	tmp = malloc(sizeof(str));
	while (str[i++] && chr[j])
	{
		if (str[i] == chr[j])
			j++;
		else
			j = 0;
	}
	if (j)
	{
		i -= (j + 1);
		j = 0;
		while (str[i++])
			tmp[j++] = str[i];
	}

	return ((j) ? tmp : NULL);
}
