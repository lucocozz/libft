#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
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
	}
	return dest;
}
