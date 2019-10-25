/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:12:14 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/25 18:43:47 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*strnew;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	if (s1[0] == '\0' && s2[0] == '\0')
		return (ft_strdup(""));
	strnew = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (strnew == NULL)
		return (NULL);
	while (s1[i])
	{
		strnew[i] = s1[i];
		i++;
	}
	while (s2[j])
		strnew[i++] = s2[j++];
	strnew[i] = '\0';
	return (strnew);
}
