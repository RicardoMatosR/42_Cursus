/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:54:33 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:12:39 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Checks whether c is an alphanumeric character (letter or digit).
** Returns 1 if true, otherwise returns 0.
*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
