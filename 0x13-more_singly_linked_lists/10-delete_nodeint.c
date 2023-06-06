#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to listint_t list
 * @index: index of the node that should be deleted
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pre = *head;
	listint_t *n = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(pre);
		return (1);
	}
	for (i = 0; i < index - 1 && pre != NULL; i++)
	{
		if (!(pre->next && index != 0))
			return (-1);
		pre = pre->next;
	}
	n = pre->next;
	pre->next = n->next;
	free(n);
	return (1);
}
