/*
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
*/
#include <stdio.h>

int ft_strlen(char *str)
{
	int	count;

	count = 0;
	while(str[count])
		count++;
	return (count);
}
int main()
{
	char str[] = "how about now ??";
	printf("%d\n", ft_strlen(str));
}
