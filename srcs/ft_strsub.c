#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *tmp;
	int i;
	
	i = 0;
	tmp = NULL;
	if (len < start)
		return NULL;
	tmp = malloc(sizeof(char) * len);
	if (tmp == NULL)
		return NULL;
	while (start < len)
		tmp[i++] = s[start++];
	return tmp;
}
