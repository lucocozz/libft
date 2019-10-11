/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 11:23:25 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/09 16:26:14 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	i = 0;
	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((tmp_s1[i] == tmp_s2[i]) && (tmp_s1[i] && tmp_s2[i]) && i < (n - 1))
		i++;
	return (tmp_s1[i] - tmp_s2[i]);
}
