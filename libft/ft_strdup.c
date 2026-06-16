/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:38:49 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:14:26 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Duplicates the string s1 by allocating sufficient memory and copying the
**  contents.
** Returns the new string or NULL if allocation fails.
*/

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	strlen;
	char	*newstr;

	strlen = ft_strlen(s1) + 1;
	newstr = malloc(strlen * sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
