#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checksif string contains a non digit character
 * @s: string to be checked
 * Return: 0 on fail/1 in string found
 */
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] >'9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - multiplies two num
 * @argc: num of arguments
 * @argv: num of array arguments
 * Return: 0
 */
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 ||

