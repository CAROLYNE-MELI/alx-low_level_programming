#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
size_t print_listint_safe(const listint_t *head);
/**
 * list_loop - frees a linked list
 * @head: douple pointer to the head
 * Return: void
 */
void free_loop(int **head)
{
	int *t;
	int *c;

	c = *head;
	if (head != NULL)
	{
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - ints a listint_t linked list
 * @head: pointer to listint_t list
 * Returns:  the number of nodes in the list
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t m = 0;
	int *new, *add, *h;

	h = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(int));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = h;
		h = new;

		add = h;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_loop(&h);
				return (m);
			}
		}
		 printf("[%p] %d\n", (void *)head, head->n);
		 head = head->next;
		 m++;
	}
	free_loop(&h);
	return (m);
}
