/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:27:51 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:12:42 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Allocates memory for count elements of size bytes and initializes all bytes
**  to zero.
** Returns a pointer to the allocated memory or NULL if allocation fails.
*/

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			total;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);
	while (total > 0)
	{
		mem[total - 1] = 0;
		total--;
	}
	return ((void *)mem);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// #include <stdint.h>
// int main(void)
// {
// 	char *mem1;
// 	char *mem2;
// 	size_t count;
// 	size_t size;
// 	int i;
// count = (SIZE_MAX + 1) / 10;
// size = 10;
// 	printf("=== ft_calloc ===\n");
// 	mem1 = ft_calloc(count, size);
// 	if (!mem1)
// 	{
// 		printf("Error\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n", mem1[i]);
// 		i++;
// 	}
// 	free(mem1);
// 	printf("\n=== calloc original ===\n");
// 	mem2 = calloc(count , size);
// 	if (!mem2)
// 		return (1);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n", mem2[i]);
// 		i++;
// 	}
// 	free(mem2);
// 	return (0);
// }