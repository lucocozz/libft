/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:30:28 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/09 16:40:31 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *tmp_s;

	tmp_s = (unsigned char *)s;
	while (n-- > 1 && *tmp_s != (unsigned char)c)
		tmp_s++;
	return (*tmp_s == (unsigned char)c ? (void *)tmp_s : NULL);
}
