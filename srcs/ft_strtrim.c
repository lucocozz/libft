#include "libft.h"
#define WS(x) s[x] == ' ' || s[x] == '\n' || s[x] == '\t'

char	*ft_strtrim(char const *s)
{
	int i;
	int j;
	int k;
	char *tmp;

	i = 0;
	k = 0;
	j = ft_strlen(s) - 1;
	while (WS(i))
		i++;
	while (WS(j))
		j--;
	tmp = ft_strnew((j - i) + 1);
	if (tmp == NULL)
		return NULL;
	while (i <= j)
		tmp[k++] = s[i++];
	tmp[k] = '\0';
	return tmp;
}
