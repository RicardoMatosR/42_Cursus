/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:22:35 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:15:13 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Converts a lowercase ASCII character to uppercase.
** Returns the converted character or the original if it is not lowercase.
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/* #include <ctype.h>
#include <stdio.h>
int	main(void)
{
	char c = 20;
	//printf("%c", c);
	//printf("\n");
	printf("%c", toupper(c));
	//printf("\n");
	printf("%c", ft_toupper(c));
	return (0);
} */
