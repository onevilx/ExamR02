/*
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
*/
#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return (n & (n - 1)) == 0;
}
int	main(void)
{
	unsigned int	num;

	num = 0;
	printf("Testing is_power_of_2 with various inputs:\n");
	while (num <= 17)
	{
		printf("Number: %u -> ", num);
		if (is_power_of_2(num))
			printf("is a power of 2\n");
		else
			printf("is NOT a power of 2\n");
		num++;
	}
	return (0);
}
