#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *tmp;
	int i;

	i = 0;
	if (s && f)
	{
		tmp = malloc(sizeof(char) * ft_strlen(s));
		while (s[i++])
			tmp[i] = f(i, s[i]);
		return tmp;
	}
	return NULL;
}
