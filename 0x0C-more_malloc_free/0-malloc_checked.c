#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - a function that a locates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 * termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
