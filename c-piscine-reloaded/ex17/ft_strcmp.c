/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:42:22 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/28 12:23:54 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (!s1[i])
		return (-1 * (unsigned char)s2[i]);
	if (!s2[i])
		return (1 * (unsigned char)s1[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	{
// 	char cadena1[] = "aaaaaaa";
// 	char cadena2[] = "aaaaaaaa";
// 		printf("\nCaso 1: \na = >%s< y \nb = >%s<\n", cadena1, cadena2);
// 		printf("libreria es: %d\n", strcmp(cadena1, cadena2));
// 		printf("ft______ es: %d\n", ft_strcmp(cadena1, cadena2));
// 	}
// 	{
// 	char cadena1[] = "aaaaaaaa";
// 	char cadena2[] = "aaaabbbb";
// 		printf("\nCaso 2: \na = >%s< y \nb = >%s<\n", cadena1, cadena2);
// 		printf("libreria es: %d\n", strcmp(cadena1, cadena2));
// 		printf("ft______ es: %d\n", ft_strcmp(cadena1, cadena2));
// 	}
// 	{
// 	char cadena1[] = "aaaaaaaa";
// 	char cadena2[] = "bbbbbbbb";
// 		printf("\nCaso 3: \na = >%s< y \nb = >%s<\n", cadena1, cadena2);
// 		printf("libreria es: %d\n", strcmp(cadena1, cadena2));
// 		printf("ft______ es: %d\n", ft_strcmp(cadena1, cadena2));
// 	}
// 	{
// 	char cadena1[] = "bbbbbbbb";
// 	char cadena2[] = "aaaaaaaa";
// 		printf("\nCaso 4: \na = >%s< y \nb = >%s<\n", cadena1, cadena2);
// 		printf("libreria es: %d\n", strcmp(cadena1, cadena2));
// 		printf("ft______ es: %d\n", ft_strcmp(cadena1, cadena2));
// 	}
// 	{
// 	char cadena1[] = "aaaabbbb";
// 	char cadena2[] = "bbbbbbbb";
// 		printf("\nCaso 5: \na = >%s< y \nb = >%s<\n", cadena1, cadena2);
// 		printf("libreria es: %d\n", strcmp(cadena1, cadena2));
// 		printf("ft______ es: %d\n", ft_strcmp(cadena1, cadena2));
// 	}
// 	{
// 	char cadena1[] = "aaaaaaaa";
// 	char cadena2[] = "aaaaaaa";
// 		printf("\nCaso 1: \na = >%s< y \nb = >%s<\n", cadena1, cadena2);
// 		printf("libreria es: %d\n", strcmp(cadena1, cadena2));
// 		printf("ft______ es: %d\n", ft_strcmp(cadena1, cadena2));
// 	}
// 	return 0;
// }