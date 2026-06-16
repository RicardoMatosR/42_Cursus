/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:16:28 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:14:48 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Compares up to n characters of strings s1 and s2.
** Returns an integer less than, equal to, or greater than zero.
*/

int	ft_strncmp(const char s1[], const char s2[], size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "AB";
	str2 = "A";
	printf("%d", ft_strncmp(str1, str2, 2));
	printf("\n");
	printf("%d", strncmp(str1, str2, 2));
	printf("\n");
	return (0);
}*/