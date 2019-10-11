/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:29:05 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/11 15:32:05 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list *next;
	t_list *curr;

	if (lst)
	{
		curr = lst;
		next = curr->next;
		(*del)(curr->content);
		free(curr);
		curr = NULL;
		lst = next;
	}
}
