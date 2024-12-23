/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*s)
	{
		while (reject[i] && *s != reject[i])
			i++;
		if (reject[i])
			return (count);
		i = 0;
		count++;
		s++;
	}
	return (count);
}
int main(void)
{
	const char str[] = "Hello, World!";
	const char reject[] = "a";
	size_t result;

	result = ft_strcspn(str, reject);
	printf("i found it, it matches at : %zuth\n", result);

	return 0;
}
