int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/* #include <ctype.h>
#include <stdio.h>
int	main(void)
{
	char c = 20;
	//printf("%c", c);
	//printf("\n");
	printf("%c", toupper(c));
	//printf("\n");
	printf("%c", ft_toupper(c));
	return (0);
} */
