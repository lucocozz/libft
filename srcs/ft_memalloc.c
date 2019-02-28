#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *tmp;

	tmp = NULL;
	tmp = malloc(sizeof(void) * size);
	if (tmp == NULL)
		return NULL;
	ft_bzero(tmp, size);
	return tmp;
}
