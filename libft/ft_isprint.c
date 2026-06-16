/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:22:25 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:12:57 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Checks whether c is a printable ASCII character, including space.
** Returns 1 if true, otherwise returns 0.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
