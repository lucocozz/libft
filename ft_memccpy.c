/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:13:19 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/09 15:55:06 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp_src;
	unsigned char	*tmp_dest;

	i = 0;
	tmp_src = (unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		if (tmp_src[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
