#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;
	int b;
	char *tmp = NULL;

	i = ft_strlen(s);
	j = 0;
	b = 0;
	tmp = malloc(sizeof(s));
	while (i-- && !(b))
		if (s[i] == c)
			b = 1;
	if (b)
		while (s[i++])
			tmp[j++] = s[i];

	return ((b) ? tmp : NULL);
}
