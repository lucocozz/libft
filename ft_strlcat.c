/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 15:33:36 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/09 15:41:45 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *str, size_t size)
{
	unsigned int i;

	i = 0;
	while (str[i] && i < size)
		i++;
	return (i);
}

size_t			ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int i;
	unsigned int destlen;

	i = 0;
	destlen = ft_strnlen(dest, size);
	if (size == 0)
		return (ft_strlen(src));
	if (size == destlen)
		return (ft_strlen(src) + size);
	while (src[i] && (destlen + i) < (size - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + ft_strlen(src));
}
