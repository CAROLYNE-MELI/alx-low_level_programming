#include "main.h"
/**
 * _pow_recursion - function that returns the natural square root of a number
 * @x: input
 * @y: input
 *Return: returns the natural square root of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
