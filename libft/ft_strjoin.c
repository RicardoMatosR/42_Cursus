/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 20:27:01 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:14:33 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Allocates and returns a new string, which is the concatenation of s1 and s2.
** Returns NULL if allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		newstr[i + j] = s2[j];
		j++;
	}
	newstr[i + j] = '\0';
	return (newstr);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str1 = NULL;
// 	char *str2 = "World!";
// 	printf("%s\n", ft_strjoin(str1, str2));
// 	return 0;
// }