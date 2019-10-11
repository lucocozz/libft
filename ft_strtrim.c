/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:22:24 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/10 22:29:30 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!s1)
		return (NULL);
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	return (i == j ? ft_calloc(2, sizeof(char)) : ft_substr(s1, i, j - i + 1));
}
