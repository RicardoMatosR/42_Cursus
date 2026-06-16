/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 20:38:25 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/07 18:45:17 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*number;
	long	nbr;

	nbr = n;
	len = get_int_len(nbr);
	number = malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	number[len] = '\0';
	if (nbr == 0)
		number[0] = '0';
	if (nbr < 0)
	{
		number[0] = '-';
		nbr = nbr * (-1);
	}
	while (nbr > 0)
	{
		number[--len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (number);
}

/*#include <stdio.h>
int	main(void)
{
	int numero = -12345678;
	int len = get_int_len(numero);
	printf("%d", len);
	return (0);
}*/