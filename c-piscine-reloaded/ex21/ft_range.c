/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 12:23:22 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/28 12:24:06 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	arr = malloc(range * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// #include <stdio.h>
// int main(void)
// {
// 	int a;
// 	int b;
// 	int i;
// 	int *arr;

// 	a = 4;
// 	b = 1;
// 	i = 0;
// 	arr = ft_range(b, a);
// 	if (!arr)
// 	{
// 		printf("No existe\n");
// 		return 0;
// 	}
// 	while (i < (a - b))
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	return 0;
// }