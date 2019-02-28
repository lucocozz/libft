#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	char	*tmp;
	size_t	cursize;

	if (ptr == 0)
		return (malloc(size));
	cursize = sizeof(ptr);
	if (size <= cursize)
		return (ptr);
	tmp = malloc(size);
	ft_memcpy(tmp, ptr, cursize);
	free(ptr);
	return tmp;
}
