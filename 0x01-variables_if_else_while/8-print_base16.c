#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char c;
	int d;

	c = 'a';
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
