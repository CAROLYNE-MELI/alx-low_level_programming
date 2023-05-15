#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and init it with a specific char
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: NULL if size = 0 /pointer to array /NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
