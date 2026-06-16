/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 15:38:39 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/07 18:15:13 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = ft_lstnew("Hola");
	n2 = ft_lstnew("Mundo");
	n3 = ft_lstnew("42");

	n1->next = n2;
	n2->next = n3;

	printf("Tamaño: %d\n", ft_lstsize(n2));

	free(n1);
	free(n2);
	free(n3);

	return (0);
} */