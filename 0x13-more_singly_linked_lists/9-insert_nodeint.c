#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *insert_nodeint_at_index -  inserts a new node at a given position
 * @head: douple pointer to listint_t list
 * @idx:  index of the list where the new node should be added
 * @n: data to be added
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *newnod;
	listint_t *j = *head;

	newnod = malloc(sizeof(listint_t));
	if (newnod == NULL)
		return (NULL);
	if (j == NULL && idx != 0)
		return (NULL);
	for (m = 0; m < idx - 1 && j != NULL; m++)
		j = j->next;
	newnod->n =n;
	if (idx == 0)
	{
		newnod->next = *head;
		*head = newnod;
	}
	else
	{
		newnod->next = j->next;
		j->next = newnod;
	}
	return (newnod);
}
