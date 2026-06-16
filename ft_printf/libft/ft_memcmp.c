/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:59:16 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/03 17:51:41 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h> // Para la función memcmp original

// Prototipo de tu función para que el main la conozca
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	printf("--- TEST 1: Cadenas Idénticas ---\n");
	char t1_a[] = "42Madrid";
	char t1_b[] = "42Madrid";
	printf("Original : %d\n", memcmp(t1_a, t1_b, 8));
	printf("Tuya     : %d\n\n", ft_memcmp(t1_a, t1_b, 8));

	printf("--- TEST 2: Cadenas Diferentes (Frente a Frente) ---\n");
	char t2_a[] = "abcdef";
	char t2_b[] = "abcZef"; // La 'd' (ASCII 100) vs la 'Z' (ASCII 90)
	printf("Original : %d\n", memcmp(t2_a, t2_b, 6));
	printf("Tuya     : %d\n\n", ft_memcmp(t2_a, t2_b, 6));

	printf("--- TEST 3: El test del '\\0' oculto ---\n");
	// Metemos un \0 a mano en mitad del array para camuflarlo
	char t3_a[] = "hola\0universo";
	char t3_b[] = "hola\0mundo";
	// Si le decimos que compare 10 bytes, saltará por encima del \0
	// y encontrará la diferencia entre la 'u' de universo y la 'm' de mundo
	printf("Original : %d\n", memcmp(t3_a, t3_b, 10));
	printf("Tuya     : %d\n\n", ft_memcmp(t3_a, t3_b, 10));

	return (0);
}*/