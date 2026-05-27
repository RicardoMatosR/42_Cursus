/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:25:44 by rimatos-          #+#    #+#             */
/*   Updated: 2026/05/27 18:49:45 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int atoi(const char *nptr)
{
	int	i;
	int	n;
	int sign;

	i = 0;
	n = 0;
	sign = 1;
	while (nptr[i])
	{
		if (isspace(nptr[i]) != 0)
			i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	while (nptr[i])
	{
		/* code */
	}
	
	return (n * sign);
}

int	isspace(char c)
{
	if (c == " " || c == "\f" || c == "\n" || c == "\r" || c == "\t" || c == "\v")
		return (1);
	return (0);
}