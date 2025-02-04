/*
Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
*/
#include <unistd.h>

void	write_word(char *start, char *end)
{
	while (start < end)
		write(1, start++, 1);
}
int main (int argc, char **argv)
{
	char	*str;
	char	*firstwstart;
	char	*firstwend;

	if (argc > 1)
	{
		str = argv[1];
		while (*str == ' ' || *str == '\t') str++;
		firstwstart = str;
		while (*str && *str != ' ' && *str != '\t') str++;
		firstwend = str;
		while (*str == ' ' || *str == '\t') str++;
		if (*str)
		{
			while (*str)
			{
				if (*str == ' ' || *str == '\t')
				{
					while (*str == ' ' || *str == '\t') str++;
					if (*str)
						write(1, " ", 1);
				}
				else
					write(1, str++, 1);
			}
			write(1, " ", 1);
		}
		write_word(firstwstart, firstwend);
	}
	write(1, "\n", 1);
	return (0);
}