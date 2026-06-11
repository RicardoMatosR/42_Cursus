/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 18:54:18 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:14:13 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Writes the integer n to the file descriptor fd as a string of digits.
*/

void	ft_putnbr_fd(int n, int fd)
{
	long	n_long;
	char	c;

	n_long = n;
	if (n_long < 0)
	{
		n_long = n_long * (-1);
		ft_putchar_fd('-', fd);
	}
	if (n_long >= 10)
		ft_putnbr_fd(n_long / 10, fd);
	c = (n_long % 10) + '0';
	ft_putchar_fd(c, fd);
}
