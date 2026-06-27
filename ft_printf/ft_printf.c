/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 22:09:46 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/27 22:19:33 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	comprobation(char c, va_list arg)
{
	int	printed;

	printed = 0;
	if (c == 's')
		printed += ft_print_str(va_arg(arg, char *));
	else if (c == 'c')
		printed += ft_print_char(va_arg(arg, int));
	else if (c == 'd' || c == 'i')
		printed += put_nbr_base((long long)va_arg(arg, int), "0123456789");
	else if (c == 'u')
		printed += put_unbr_base((unsigned int)va_arg(arg, unsigned int),
				"0123456789");
	else if (c == 'x')
		printed += put_unbr_base((unsigned int)va_arg(arg, unsigned int),
				"0123456789abcdef");
	else if (c == 'X')
		printed += put_unbr_base((unsigned int)va_arg(arg, unsigned int),
				"0123456789ABCDEF");
	else if (c == 'p')
		printed += ft_print_ptr(va_arg(arg, unsigned long long));
	else if (c == '%')
		printed += ft_print_char('%');
	return (printed);
}

int	ft_printf(const char *text, ...)
{
	va_list	arg;
	int		i;
	int		count;

	if (!text)
		return (-1);
	va_start(arg, text);
	i = 0;
	count = 0;
	while (text[i])
	{
		if (text[i] == '%' && text[i + 1])
		{
			i++;
			count += comprobation(text[i], arg);
		}
		else
			count += ft_print_char(text[i]);
		i++;
	}
	va_end(arg);
	return (count);
}

/* #include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

static void	print_separator(void)
{
	printf("\n----------------------------------------\n\n");
}

int	main(void)
{
	int		r1;
	int		r2;
	int		x;

	x = 42;

	print_separator();

	printf("TEST CHAR\n");
	r1 = printf("printf    : [%c]\n", 'A');
	r2 = ft_printf("ft_printf : [%c]\n", 'A');
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST STRING\n");
	r1 = printf("printf    : [%s]\n", "hello world");
	r2 = ft_printf("ft_printf : [%s]\n", "hello world");
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST POINTER\n");
	r1 = printf("printf    : [%p]\n", (void *)&x);
	r2 = ft_printf("ft_printf : [%p]\n", (void *)&x);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST NULL POINTER\n");
	r1 = printf("printf    : [%p]\n", (void *)NULL);
	r2 = ft_printf("ft_printf : [%p]\n", (void *)NULL);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST DECIMAL POSITIVE\n");
	r1 = printf("printf    : [%d]\n", 12345);
	r2 = ft_printf("ft_printf : [%d]\n", 12345);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST DECIMAL NEGATIVE\n");
	r1 = printf("printf    : [%d]\n", -12345);
	r2 = ft_printf("ft_printf : [%d]\n", -12345);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST INT MAX\n");
	r1 = printf("printf    : [%d]\n", INT_MAX);
	r2 = ft_printf("ft_printf : [%d]\n", INT_MAX);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST INT MIN\n");
	r1 = printf("printf    : [%d]\n", INT_MIN);
	r2 = ft_printf("ft_printf : [%d]\n", INT_MIN);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST INTEGER i\n");
	r1 = printf("printf    : [%i]\n", -42);
	r2 = ft_printf("ft_printf : [%i]\n", -42);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST UNSIGNED\n");
	r1 = printf("printf    : [%u]\n", 4294967295U);
	r2 = ft_printf("ft_printf : [%u]\n", 4294967295U);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST HEX LOWERCASE\n");
	r1 = printf("printf    : [%x]\n", 450);
	r2 = ft_printf("ft_printf : [%x]\n", 450);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST HEX UPPERCASE\n");
	r1 = printf("printf    : [%X]\n", 450);
	r2 = ft_printf("ft_printf : [%X]\n", 450);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST HEX MAX UNSIGNED\n");
	r1 = printf("printf    : [%x]\n", 4294967295U);
	r2 = ft_printf("ft_printf : [%x]\n", 4294967295U);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST PERCENT\n");
	r1 = printf("printf    : [%%]\n");
	r2 = ft_printf("ft_printf : [%%]\n");
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	return (0);
} */