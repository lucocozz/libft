/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcocozza <lcocozza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:26:16 by lucocozz          #+#    #+#             */
/*   Updated: 2019/10/12 20:08:06 by lcocozza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*newlst;

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
