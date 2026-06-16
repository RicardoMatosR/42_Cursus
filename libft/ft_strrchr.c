/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:59:15 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:14:59 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Locates the last occurrence of character c in the string s.
** Returns a pointer to the character or NULL if not found.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[len]);
	while (len > 0)
	{
		len--;
		if (s[len] == (char)c)
			return ((char *)&s[len]);
	}
	return (NULL);
}
