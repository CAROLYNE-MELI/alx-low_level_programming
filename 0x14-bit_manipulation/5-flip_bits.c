#include <stdio.h>
#include "main.h"
/**
 *  flip_bits -  returns the number of bits you would need to flip
 *  to get from one number to another
 *  @n: holds the number to flip
 *  @m: unsigned long number
 *  Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip;

	for (flip = 0; n || m; n >>= 1, m >>=1)
	{
		if ((n & 1) != (m & 1))
			flip++;
	}
	return (flip);
}
