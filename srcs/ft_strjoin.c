#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *tmp;

	tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (tmp == NULL)
		return NULL;
	ft_strcpy(tmp, s1);
	ft_strcat(tmp, s2);
	return tmp;
}
