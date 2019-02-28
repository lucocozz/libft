#include "libft.h"

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	
	size = size;
	for (i = 0; dest[i] != '\0'; i++) ;
	for (j = 0; src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';
	for (i = 0; dest[i] != '\0'; i++) ;
	return i;
}
