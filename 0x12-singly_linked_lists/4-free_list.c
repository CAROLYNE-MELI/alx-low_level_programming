#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list -  a function that frees a list_t list
 * @*head: pointer to list-t list
 * Return: (void)
 */
void free_list(list_t *head)
{
	while (head)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
