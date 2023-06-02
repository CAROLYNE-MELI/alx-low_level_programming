#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node_end - adds a new node at end of list_t list
 * @head: douple pointer to list_t list
 * @str: string to be added at end
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp = *head;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	end->str = strdup(str);
	end->len = len;
	end->next = NULL;
	if (end->str == NULL)
	{
		free(end);
		return (NULL);
	}
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
