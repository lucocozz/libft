#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list newlist;

	newlist = malloc(sizeof(t_list));
	if (newlist == NULL)
		return NULL;
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	else
	{
		newlist->content = ft_memalloc(content_size);
		if (new->listcontent == NULL)
			return NULL;
		ft_memcpy(newlist->content, content, content_size);
		newlist->content_size = content_size;
	}
	newlist->next = NULL;
	return newlist;
}
