/*
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s2[i] && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
int main()
{
	char str1[] = "hello this is a test";
	char str2[] = "hello this is a test";

	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}
