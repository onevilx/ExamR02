/*
Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100
*/
#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet);

int	main(void)
{
	unsigned char	octet = 65; // Binary: 0100 0001
	unsigned char	swapped;

	swapped = swap_bits(octet);
	printf("Original byte: %u (binary: 0100 0001)\n", octet);
	printf("Swapped byte:  %u (binary: 0001 0100)\n", swapped);
	return (0);
}
