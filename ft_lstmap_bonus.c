/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:26:16 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/25 15:17:34 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*prev;

	newlst = NULL;
	if (lst)
	{
		newlst = ft_lstnew((*f)(lst->content));
		prev = lst;
		lst = lst->next;
		ft_lstdelone(prev, del);
	}
	while (lst)
	{
		ft_lstadd_back(&newlst, ft_lstnew((*f)(lst->content)));
		prev = lst;
		lst = lst->next;
		ft_lstdelone(prev, del);
	}
	return (newlst);
}
