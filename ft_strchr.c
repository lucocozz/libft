/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:02:58 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/08 12:17:29 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (i < ft_strlen(s) + 1)
		if (s[i] == c)
			return ((char *)&s[i]);
		else
			i++;
	return (NULL);
}
