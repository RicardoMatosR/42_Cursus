/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:02:33 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/28 12:23:39 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	while (nb > 1)
		result *= nb--;
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("El factorial de %d es %d\n", -5, ft_iterative_factorial(-5));
// 	printf("El factorial de %d es %d\n", 0, ft_iterative_factorial(0));
// 	printf("El factorial de %d es %d\n", 5, ft_iterative_factorial(5));
// 	return 0;
// }
