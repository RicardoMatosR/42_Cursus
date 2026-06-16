/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:25:44 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:12:47 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		return (1);
	return (0);
}
/*
** Converts the initial portion of the string pointed to by nptr to int.
** Skips leading whitespace, handles an optional + or - sign, and stops at the
** first non-digit character.
** Returns the converted integer value.
*/

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		n = (n * 10) + (nptr[i] - '0');
		i++;
	}
	return (n * sign);
}

/*#include <stdio.h>
int	main(void)
{
	const char *str = "   -1213b13";
	int	numero = ft_atoi(str);
	printf("%d", numero);
	return (0);
}*/