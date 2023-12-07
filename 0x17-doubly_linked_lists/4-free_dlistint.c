#include "lists.h"

/**
 * free_dlistint - free doubly linked list int
 * @head: the head of doubly linked list int
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head)
	{
		while (head->prev)
			head = head->prev;

		while (head)
		{
			next = head->next;
			free(head);
			head = next;
		}
	}
}
