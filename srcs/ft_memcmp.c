#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	char *tmps1;
	char *tmps2;

	i = 0;
	tmps1 = (char *)s1;
	tmps2 = (char *)s2;
	while (n-- && tmps1[i] == tmps2[i])
		i++;
	return (tmps1[i] - tmps2[i]);
}
