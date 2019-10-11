/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:26:16 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/11 16:42:29 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void*))
{
	t_list *newlst;

	newlst = NULL;
	if (lst)
	{
		newlst = ft_lstnew((*f)(lst->content));
		lst = lst->next;
	}
	while (lst)
	{
		ft_lstadd_back(&newlst, ft_lstnew((*f)(lst->content)));
		lst = lst->next;
	}
	return (newlst);
}
