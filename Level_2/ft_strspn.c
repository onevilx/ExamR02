/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
*/
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while(*s)
	{
		while(accept[i] && *s != accept[i])
			i++;
		if (accept[i] == '\0')
			return (count);
		i = 0;
		count++;
		s++;
	}
	return (count);
}
int main()
{
	char str[] = "heeelllooisthisatesst";
	char srch[] = "hel12";
	size_t res;

	res = ft_strspn(str, srch);
	if (res > 0)
		printf("the matched character is : %zu\n", res);
	else
		printf("there is no match characters in the string.\n");
	return (0);
}
