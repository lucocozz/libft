/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcocozza <lcocozza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:30:57 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/12 19:30:11 by lcocozza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (str);
	while (to_find[i] && str[j] && j < (int)n)
	{
		if (to_find[i] == str[j])
			i++;
		else
			i = 0;
		j++;
	}
	return (to_find[i] ? 0 : &str[j - i]);
}
