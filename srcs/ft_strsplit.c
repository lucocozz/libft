#include "libft.h"

static int	ft_wordlen(char const *s, int i, char c)
{
	int len;

	len = 0;
	while (s[i++] != c && s[i] != '\0')
		len++;
	return len;
}

static int	count_word(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] != '\0')
			i++;
	}
	return count;
}

char	**ft_strsplit(char const *s, char c)
{
	char **tab;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(char *) * count_word(s, c) + 1)) == NULL)
		return NULL;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i])
		{
			k = 0;
			if ((tab[j] = malloc(sizeof(char) * ft_wordlen(s, i, c) + 1)) == NULL)
				return NULL;
			while (s[i] != c && s[i] != '\0')
				tab[j][k++] = s[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return tab;
}
