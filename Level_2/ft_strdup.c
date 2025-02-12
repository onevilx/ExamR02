/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/
#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int i = 0, len = 0;
	char	*cpy;
	while(src[len])
		len++;
	cpy = malloc(len + 1);
	if (cpy != NULL)
	{
		while(src[i])
		{
			cpy[i] = src[i];
			i++;
		}
		cpy[i] = '\0';
	}
	return (cpy);
}
int main()
{
	char original[] = "hi, this is a test !";
	char *Dup;

	Dup = ft_strdup(original);

	printf("Orignial : %s\n", original);
	printf("Duplicate : %s\n", Dup);
}
