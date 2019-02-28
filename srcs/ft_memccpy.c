#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;
	char *tmpd;
	char *tmps;

	i = 0;
	tmpd = (char *)dest;
	tmps = (char *)src;
	while (n--)
	{
		tmpd[i] = tmps[i];
		i++;
		if (tmps[i] == c)
		{
			tmpd[i] = tmps[i];
			return dest;
		}
	}
	return NULL;
}
