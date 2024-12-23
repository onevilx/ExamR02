/*
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
*/
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int ya = 1;
	int oa = 69;
	printf("old age is : %d, and young age is : %d\n", oa, ya);
	ft_swap(&ya, &oa);
	printf("old age is : %d, and young age is : %d\n", oa, ya);
}
