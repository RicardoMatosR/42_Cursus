/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:22:16 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:12:53 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Checks whether c is a valid ASCII character (value between 0 and 127).
** Returns 1 if true, otherwise returns 0.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
