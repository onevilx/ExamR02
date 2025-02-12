/*
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
*/
#include <stdio.h>

int    ft_atoi_base(const char *str, int str_base)
{
    int i = 0, res = 0, sign = 1, digit;

    if (!str || (str_base < 2 || str_base > 16 ))
        return 0;
		
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
    
	while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            digit = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            digit = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            digit = str[i] - 'A' + 10;
        else
            break;
        if (digit >= str_base)
            break;
        res = res * str_base + digit;
        i++;
    }
    return (res * sign);
}

int main() 
{
    char *num1 = "1010";  // Binary representation of 10
    char *num2 = "FF";    // Hexadecimal representation of 255
    char *num3 = "123";   // Decimal representation of 123
    char *num4 = "Z";     // Base 36 example (should return 35)
    
    // Test with base 2 (binary)
    printf("Base 2 (binary): %s -> %d\n", num1, ft_atoi_base(num1, 2));

    // Test with base 16 (hexadecimal)
    printf("Base 16 (hex): %s -> %d\n", num2, ft_atoi_base(num2, 16));

    // Test with base 10 (decimal)
    printf("Base 10 (decimal): %s -> %d\n", num3, ft_atoi_base(num3, 10));

    // Test with base 36 (alphanumeric base)
    printf("Base 36: %s -> %d\n", num4, ft_atoi_base(num4, 36));

    return 0;
}
