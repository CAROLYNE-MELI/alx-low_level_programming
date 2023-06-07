#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - a function that frees a listit_t list
 * @h: douple pointer to the first node of listint_t list
 * Return: the size of the list that was free’d
 * The function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int d;
	listint_t *t;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
