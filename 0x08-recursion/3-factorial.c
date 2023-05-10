#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: input
 * Return: returns the factorial of a given number
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return (n * factorial(n - 1));
}
