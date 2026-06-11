/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 19:20:36 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:13:17 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Creates a new list node with content and next set to NULL.
** Returns the new node or NULL if allocation fails.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list ->content = content;
	list ->next = (NULL);
	return (list);
}

/* #include <stdio.h>
int main(void)
{
	char *str;
	t_list *node;

	str = "hola";
	node = ft_lstnew(str);

	printf("content = %s\n", (char *)node->content);

	if (node->next == NULL)
		printf("next es NULL\n");

	free(node);
	return (0);
} */