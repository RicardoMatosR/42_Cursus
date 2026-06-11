/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 14:27:34 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/28 12:23:17 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;
	int		n;

	n = 0;
	while (n <= 9)
	{
		c = n + '0';
		ft_putchar(c);
		n++;
	}
}

/*
int main()
{
	ft_print_numbers();
	return 0;
}
*/
