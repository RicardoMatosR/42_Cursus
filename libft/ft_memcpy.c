/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:38:52 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:13:26 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Copies n bytes from memory area src to memory area dest.
** The memory areas must not overlap.
** Returns a pointer to dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*aux_src;
	unsigned char		*aux_dest;

	aux_src = (const unsigned char *)src;
	aux_dest = (unsigned char *)dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}
