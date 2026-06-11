/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:31:49 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/28 12:23:45 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int n;

// 	n = 64;
// 	printf("La raiz cuadra de %d es %d\n",n, ft_sqrt(n));
// 	return 0;
// }
