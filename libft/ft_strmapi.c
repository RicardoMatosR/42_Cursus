/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 20:17:06 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:14:45 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Applies function f to each character of s to create a new string resulting 
**	from successive applications.
** Returns the new string or NULL if allocation fails.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	char			char_to_str;
	unsigned int	len;
	size_t			i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	newstr = malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		char_to_str = f(i, s[i]);
		newstr[i] = char_to_str;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/* char ft_test(unsigned int n, char c)
{
	return (c + n);
}
#include <stdio.h>

int	main(void)
{
	char *str = "aaaa";
	char *str2;

	str2 = ft_strmapi(str, &ft_test);
	printf(">%s<\n", str2);
	free(str2);
	return (0);
} */