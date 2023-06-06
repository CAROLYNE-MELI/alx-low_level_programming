#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *reverse_listint -  reverses a listint_t linked list
 * @head: douple pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
