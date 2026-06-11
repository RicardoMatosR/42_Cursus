/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:22:23 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:12:55 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Checks whether c is a decimal digit (0-9).
** Returns 1 if true, otherwise returns 0.
*/

int	ft_isdigit(int a)
{
	return (a >= '0' && a <= '9');
}
