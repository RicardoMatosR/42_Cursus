int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/* #include <ctype.h>
#include <stdio.h>
int main()
{
	printf("toupper libc: >%c<\n", tolower('a'));
	printf("toupper lift: >%c<\n\n", ft_tolower('a'));
	printf("toupper libc: >%c<\n", tolower('A'));
	printf("toupper lift: >%c<\n\n", ft_tolower('A'));
	printf("toupper libc: >%c<\n", tolower('1'));
	printf("toupper lift: >%c<\n", ft_tolower('1'));
	return 0;
}
 */