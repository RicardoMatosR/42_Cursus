/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:22:33 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:15:11 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Converts an uppercase ASCII character to lowercase.
** Returns the converted character or the original if it is not uppercase.
*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/* #include <ctype.h>
#include <stdio.h>
int main()
{
	printf("toupper libc: >%c<\n", tolower('a'));
	printf("toupper lift: >%c<\n\n", ft_tolower('a'));
	printf("toupper libc: >%c<\n", tolower('A'));
	printf("toupper lift: >%c<\n\n", ft_tolower('A'));
	printf("toupper libc: >%c<\n", tolower('1'));
	printf("toupper lift: >%c<\n", ft_tolower('1'));
	return 0;
}
 */