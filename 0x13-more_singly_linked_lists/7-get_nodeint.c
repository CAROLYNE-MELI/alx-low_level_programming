#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - returns nth node of a listint_t linked list
 * @head: pointer to the first node on listint_t list
 * @index:  the index of the node, starting at 0
 * Return: nth node/ NULLif node does not exists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int m = 0;

	if (head == NULL)
		return (NULL);

	while (m < index)
	{
		temp = temp->next;
		m++;
	}
	return (temp);
}
