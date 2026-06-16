/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 20:02:31 by rimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 17:14:30 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Applies the function f to each character of the string s, passing the
**  character index and address.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	ft_move_char(unsigned int n, char *c)
{
	*c = *c + n;
}

#include <stdio.h>
int	main(void)
{
	char	string[] = "aaaa";

	ft_striteri(string, ft_move_char);
	printf("%s\n", string);

	return (0);
} */