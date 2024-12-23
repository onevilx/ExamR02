/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	result;
	unsigned int i = 0;

	if (len == 0)
		return (0);
	result = tab[i];
	while(i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return result;
}
int main()
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	unsigned int len = 5;
	int	res;

	res = max(tab, len);
	if (len == 0)
		printf("the string is empty");
	else
		printf("%d\n", res);
	return (0);
}
