/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 17:32:26 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:13:15 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*clear(t_list *list, void (*del)(void *))
{
	ft_lstclear(&list, del);
	return (NULL);
}
/*
** Creates a new list by applying function f to each element of lst.
** Uses del to free allocated content if an allocation fails while building
**  the new list.
** Returns the head of the new list or NULL on failure.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*first_node;
	t_list	*new_node;

	first_node = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			return (clear(first_node, del));
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			return (clear(first_node, del));
		}
		ft_lstadd_back(&first_node, new_node);
		lst = lst->next;
	}
	return (first_node);
}
