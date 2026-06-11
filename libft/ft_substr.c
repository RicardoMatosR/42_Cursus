/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:12:34 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:15:08 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*if (10 (len) + 2 (start) > s_len(10)
	len(8) = s_len(10) - start(2)*/
/*
** Extracts a substring from s starting at index start and of maximum size len.
** Returns the new allocated substring or an empty string if start is beyond
**  the end of s.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	if (len + start > s_len)
		len = s_len - start;
	i = 0;
	new_str = malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	while (s[i + start] && i < len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "123456789";
// 	char *new_str;

// 	new_str = ft_substr(str, 3, 109);
// 	printf("%s\n", new_str);
// 	free(new_str);
// 	new_str = ft_substr(str, 3, 1);
// 	printf("%s\n", new_str);
// 	free(new_str);
// 	new_str = ft_substr(str, 3, 2);
// 	printf("%s\n", new_str);
// 	free(new_str);
// 	return 0;
// }