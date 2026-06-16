/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 12:23:06 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/28 12:24:02 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (new_str == NULL)
		return (NULL);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *origin = "Hola mundo";
// 	char *copy;

// 	copy = ft_strdup(origin);
// 	printf("%p\n", &origin);
// 	printf("%p\n", &copy);
// 	printf("%s\n", copy);
// 	return 0;
// }