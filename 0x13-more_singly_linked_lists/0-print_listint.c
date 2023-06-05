#include <stdio.h>
#include "lists.h"
/**
 * print_listint - func that prints all the elements of listint_t list
 * @h: pointer to listint_t
 * Return: the num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
