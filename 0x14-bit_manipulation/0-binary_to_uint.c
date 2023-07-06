#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return:the converted number, or 0 if is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int binary = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		binary = 2 * binary + (b[i] - '0');
	}
	return (binary);
}
