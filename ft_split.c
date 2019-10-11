/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:54:42 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/08 18:11:38 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(char *str, char c)
{
	int	i;
	int	nb;
	int	bl;

	i = 0;
	nb = 0;
	while (str[i])
	{
		bl = 0;
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i])
		{
			nb += (bl ? 0 : 1);
			bl = 1;
			i++;
		}
	}
	return (nb);
}

char	*ft_cut_word(char *str, char c, int *i)
{
	int		j;
	int		len;
	char	*strnew;

	j = 0;
	len = 0;
	while (str[*i] == c && str[*i])
		*i += 1;
	while (str[*i + len] != c && str[*i + len])
		len++;
	if ((strnew = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (j < len)
	{
		strnew[j] = str[*i];
		j++;
		*i += 1;
	}
	strnew[j] = '\0';
	return (strnew);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	char	**tab;
	int		offset;
	int		tab_size;

	i = 0;
	offset = 0;
	tab_size = ft_count_word((char *)str, c);
	if ((tab = malloc(sizeof(char *) * tab_size + 1)) == NULL)
		return (NULL);
	while (i < tab_size)
	{
		tab[i] = ft_cut_word((char *)str, c, &offset);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
