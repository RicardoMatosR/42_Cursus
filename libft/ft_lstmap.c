/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 17:32:26 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/07 18:15:30 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*clear(t_list *list, void (*del)(void *))
{
	ft_lstclear(&list, del);
	return (NULL);
}

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
