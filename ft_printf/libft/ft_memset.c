/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2026/05/25 14:22:27 by rimatos-          #+#    #+#             */
/*   Updated: 2026/05/25 14:22:27 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "hola que tal";
	// int numero = {1, 2 , 3, 4 ,5};
	ft_memset(str, 'X', 44);
	printf("%s", str);
	return (0);
}*/