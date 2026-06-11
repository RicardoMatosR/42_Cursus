/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:28:06 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:12:45 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Sets the first n bytes of the memory area pointed to by s to zero.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
