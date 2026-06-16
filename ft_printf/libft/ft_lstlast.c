/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 15:44:31 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/07 18:15:05 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux_lst;

	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		aux_lst = lst;
		lst = lst->next;
		if (lst == NULL)
			return (aux_lst);
	}
	return (lst);
}
