/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:19:43 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/09 17:14:26 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int i;

	i = ft_strlen(s) + 1;
	while (i-- > 0)
		if (s[i] == c)
			return ((char *)&s[i]);
	return (NULL);
}
