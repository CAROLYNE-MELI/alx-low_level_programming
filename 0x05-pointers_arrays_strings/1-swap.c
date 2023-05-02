#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: integer to be swaped
 * @b: integer to be swaped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
