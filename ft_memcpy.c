/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:29:23 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/08 19:31:43 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *tmp_dest;
	unsigned char *tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (!n || dest == src)
		return (dest);
	while (n-- > 0)
		*tmp_dest++ = *tmp_src++;
	return (dest);
}
