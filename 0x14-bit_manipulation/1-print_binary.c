#include <stdio.h>
#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: contains numbers to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int m, j = 0;
	unsigned int binary;

	for (m = 63; m >= 0; m--)
	{
		binary = n >> m;
		if (binary & 1)
		{
			_putchar('1');
			binary++;
		}
		else if (binary)
			_putchar('0');
	}
	if (binary == NULL)
		_putchar('0');
}
