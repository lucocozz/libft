#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	int j;
	int b;
	char *tmp;
	char *tmpd = NULL;

	i = 0;
	j = 0;
	b = 0;
	tmp = (char *)s;
	tmpd = malloc(sizeof(s));
	while (n-- && !(b))
		if (tmp[i++] == c)
			b = 1;
	i -= 2;
	if (b)
		while (tmp[i++] != '\0')
			tmpd[j++] = tmp[i];

	return ((b) ? tmpd : NULL);
}
