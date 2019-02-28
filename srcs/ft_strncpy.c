#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;

	i = 0;
	while (src[i++] != '\0' && n--)
		dest[i] = src[i];
	if (src[i] == '\0')
		dest[i] = '\0';

	return dest;
}
