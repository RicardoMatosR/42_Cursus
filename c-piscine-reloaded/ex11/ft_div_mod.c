/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimatos- <rimatos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 14:12:58 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/28 12:23:36 by rimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
	int a = 21;
	int b =b =  4;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("El resultado despues de la funcion es:\n");
	printf(" a = %d \n b = %d \n div = %d \n mod = %d \n", a, b, div, mod);
	return 0;
}
*/
