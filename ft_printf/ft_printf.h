/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 22:10:26 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/27 22:15:44 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *text, ...);
int	comprobation(char c, va_list arg);

int	ft_print_char(int c);
int	ft_print_str(char *str);
int	put_nbr_base(long long nbr, char *base);
int	put_unbr_base(unsigned long long nbr, char *base);
int	ft_print_ptr(unsigned long long ptr);

#endif