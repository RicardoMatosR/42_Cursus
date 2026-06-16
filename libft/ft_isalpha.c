/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:54:25 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:12:50 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Checks whether c is an alphabetic character (A-Z or a-z).
** Returns 1 if true, otherwise returns 0.
*/

int	ft_isalpha(int a)
{
	return ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'));
}
