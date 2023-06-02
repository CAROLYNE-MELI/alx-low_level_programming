#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *  *add_node - function that adds a new node at the beginning of a list_t list
 *  @str: string to add to the node
 *  @head: double pointer to list_t
 *  Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	(newnode)->str = strdup(str);
	(newnode)->len = len;
	(newnode)->next = (*head);
	(*head) = newnode;
	return (*head);
}
