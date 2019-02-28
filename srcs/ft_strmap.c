#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *tmp;
	int i;

	if (s && f)
	{
		i = 0;
		tmp = malloc(sizeof(char) * ft_strlen(s));
		while (s[i++])
			tmp[i] = f(s[i]);
		return tmp;
	}
	return NULL;
}
