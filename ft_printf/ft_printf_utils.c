/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 22:08:57 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/27 22:15:49 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	put_nbr_base(long long nbr, char *base)
{
	int		base_n;
	char	c;
	int		count;

	base_n = ft_strlen(base);
	count = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
		count += 1;
	}
	if (nbr >= base_n)
		count += put_nbr_base(nbr / base_n, base);
	c = base[nbr % base_n];
	write(1, &c, 1);
	count += 1;
	return (count);
}

int	put_unbr_base(unsigned long long nbr, char *base)
{
	unsigned long long	base_n;
	char				c;
	int					count;

	base_n = ft_strlen(base);
	count = 0;
	if (nbr >= base_n)
		count += put_unbr_base(nbr / base_n, base);
	c = base[nbr % base_n];
	write(1, &c, 1);
	count += 1;
	return (count);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
	{
		count += ft_print_str("(nil)");
		return (count);
	}
	count += ft_print_str("0x");
	count += put_unbr_base(ptr, "0123456789abcdef");
	return (count);
}
