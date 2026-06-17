#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

/*int suma_infinita(int cantidad_de_numeros, ...)
{
	int		i;
	int		resultado;
    va_list numeros;

	va_start(numeros, cantidad_de_numeros);
	i = 0;
	while (i < cantidad_de_numeros)
	{
		resultado += va_arg(numeros, int);
		i++;
	}
	va_end(numeros);
	return resultado;
}

int	main(void)
{
	int resultado = suma_infinita(4, 45, 5, 5);
	printf("%d", resultado);
	return (0);
}*/

/*void imprimir_strings(int cantidad, ...)
{
	va_list	palabras;
	int		i;
	int		j;
	char	*palabra;

	va_start(palabras, cantidad);
	i = 0;
	while (i < cantidad)
	{
		palabra = va_arg(palabras, char*);
		j = 0;
		
		while (palabra[j])
		{
			write(1, &palabra[j], 1);
			j++;
		}
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(void)
{
    imprimir_strings(3, "Hola", "jaja", "como estamos"); 
    return (0);
}*/



int	ft_putnbr_base(long long nbr, char *base)
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
		count += ft_putnbr_base(nbr / base_n, base);
	else
	{
		c = base[nbr % base_n];
		write(1, &c, 1);
		count += 1;
	}
	return (count);
}

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void mi_mini_printf(char *texto, ...)
{
	va_list	argumentos;
	int		i;

	va_start(argumentos, texto);
	i = 0;
	while (texto[i])
	{
		if (texto[i] == '%')
		{
			if (texto[i + 1] == 's')
				ft_putstr(va_arg(argumentos, char*));
			else if (texto[i + 1] == 'c')
				ft_putchar_fd(va_arg(argumentos, int), 1);
			else if (texto[i + 1] == 'd' || texto[i + 1] == 'i')
				ft_putnbr_base((long long)va_arg(argumentos, int), "0123456789");
			i++;
		}
		else
			write(1, &texto[i], 1);
		i++;
	}
	va_end(argumentos);
}

int main(void)
{
    mi_mini_printf("Hola %s, tu inicial es la %c\n y tiene %d letras", "TitoRichar", 'T',);
    return (0);
}