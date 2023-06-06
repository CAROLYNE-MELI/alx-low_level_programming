#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * Return:  head node’s data (n).
 * @head: douple pointer to head node of listint_t to be del
 */
 int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (head == NULL || *head == NULL)
		return (0);

	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (x);
}
