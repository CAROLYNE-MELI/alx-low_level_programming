#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
<<<<<<< HEAD
 * is_digit - checksif string contains a non digit character
 * @s: string to be checked
 * Return: 0 on fail/1 in string found
 */
=======
 * is_digit - checks for non digit character in the string
 * @s: string to be checked
 * Return: 0 if a non-digit is found,1 if not
 */
int is_digit(char *s)
>>>>>>> d6b14e641b35342b07fb6a9ae4f940a5fe0f6665
{
	int i = 0;

	while (s[i])
	{
<<<<<<< HEAD
		if (s[i] < '0' || s[i] >'9')
=======
		if (s[i] < '0' || s[i] > '9')
>>>>>>> d6b14e641b35342b07fb6a9ae4f940a5fe0f6665
			return (0);
		i++;
	}
	return (1);
}
/**
<<<<<<< HEAD
 * main - multiplies two num
 * @argc: num of arguments
 * @argv: num of array arguments
 * Return: 0
 */
=======
 * _strlen - a function that returns the length of a string
 * @s: string to be checked
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - handles the errors for main function
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two num
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
>>>>>>> d6b14e641b35342b07fb6a9ae4f940a5fe0f6665
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
<<<<<<< HEAD
	if (argc != 3 ||

=======
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
>>>>>>> d6b14e641b35342b07fb6a9ae4f940a5fe0f6665
