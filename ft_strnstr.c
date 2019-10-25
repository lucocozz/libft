/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:30:57 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/25 15:30:13 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *chr, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!str || !chr)
		return (NULL);
	if (!chr[0])
		return ((char *)str);
	while (chr[i] && str[j] && j < (int)n)
	{
		if (chr[i] == str[j])
			i++;
		else
			i = 0;
		j++;
	}
	return (chr[i] ? NULL : (char *)&str[j - i]);
}
