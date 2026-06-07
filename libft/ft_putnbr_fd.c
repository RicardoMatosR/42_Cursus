/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 18:54:18 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/07 18:56:14 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
