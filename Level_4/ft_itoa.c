/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
int		nlen(int nbr)
{
	int	i;
	if (nbr == 0)
		return (1);
	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*cnum;
	int		len;
	int		is_neg;

	is_neg = (nbr < 0);
	len = nlen(nbr) + is_neg;

	cnum = (char *)malloc((len + 1) * sizeof(char));
	if (!cnum)
		return(NULL);
	cnum[len] = '\0';
	if (nbr == 0)
		cnum[0] = '0';
	if (is_neg)
		cnum[0] = '-';
	while (nbr != 0)
	{
		cnum[--len] = (is_neg ? -(nbr % 10) : (nbr % 10)) + 48;
		nbr /= 10;
	}
	return (cnum);
}
/*________________________________________________________________________________*/
int	nlen(int nb)
{
	int i = 0;
	while (nb == 0)
		return(1);
	while(nb != 0)
	{
		nb /= 10;
		i++;
	}
	return(i);
}

char	*ft_itoa(int nbr)
{
	int is_neg = (nbr < 0);
	int len = is_neg + nlen(nbr);
	char *cnum = malloc(len + 1);
	if (!cnum)
		return (NULL);
	cnum[len] = '\0';
	if (nbr == 0)
	cnum[0] = '0';
	else if (nbr < 0)
	cnum[0] = '-';
	while (nbr != 0)
	{
		cnum[--len] = (is_neg ? -(nbr % 10) : (nbr % 10)) + 48;
				nbr /= 10;
	}
	return (cnum);
}
