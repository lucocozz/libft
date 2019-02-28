#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int j;
	int b;
	char *tmp = NULL;

	i = 0;
	j = 0;
	b = 0;
	tmp = malloc(sizeof(s));
	while (s[i++] && !(b))
		if (s[i] == c)
			b = 1;
	i -= 2;
	if (b)
		while (s[i++])
			tmp[j++] = s[i];

	return ((b) ? tmp : NULL);
}
