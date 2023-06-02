#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len -  function that returns the number of elements in a linked list_t list
 * @h: pointer to list_t
 * Return: num of elements in the linked list_t
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;

		a++;
	}
	return (a);
}
