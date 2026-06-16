/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:54:31 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:13:28 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Copies n bytes from src to dest, handling overlapping memory regions safely.
** Returns a pointer to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*aux_src;
	unsigned char		*aux_dest;

	if (dest == NULL && src == NULL)
		return (NULL);
	aux_src = (const unsigned char *)src;
	aux_dest = (unsigned char *)dest;
	if (aux_dest > aux_src)
	{
		while (n > 0)
		{
			n--;
			aux_dest[n] = aux_src[n];
		}
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "hola qie tañl";
	char str2[] = "hola";
	memmove(str2, str1, 5);
	printf("%s", str2);
	return (0);
}*/