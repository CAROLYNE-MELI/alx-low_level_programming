#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: douple pointer to listint_t list.
 * @n: data to be added at end of th node
 * Return: the address of the new element / NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *temp = *head;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
        end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = end;
	return (end);
}
