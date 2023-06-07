#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *find_listint_loop - a function that finds the loop in a linked list
 * @head: poinet to listint_t list
 * Returns:address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *addr = head;

	if (head == NULL)
		return (NULL);
	
	while (s && addr && addr->next)
	{
		addr =addr->next->next;
		s = s->next;
		if (addr == s)
		{
			s = head;
			while (s != addr)
			{
				s = s->next;
				addr = addr->next;
			}
			return (addr);
		}
	}
	return (NULL);
}
