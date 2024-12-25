/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <unistd.h>
int	ft_miniatoi(char *s)
{
	int	res = 0;

	while (*s)
		res = res * 10 + (*s++ - 48);
	return (res);
}

int	ft_prime(int num)
{
	int	i = 2;
	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	put_number(int n)
{
	if (n > 9)
		put_number(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	number = ft_miniatoi(argv[1]);
		int	sum = 0;

		while (number > 0)
		{
			if (ft_prime(number))
				sum += number;
			number--;
		}
		put_number(sum);
	}
	if (argc != 2)
		put_number(0);
	write(1, "\n", 1);
	return (0);
}
