/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 23:25:06 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/08 17:05:45 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*strnew;

	i = 0;
	if ((strnew = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char))) == NULL)
		return (NULL);
	while (s1[i])
	{
		strnew[i] = s1[i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
