#include "lists.h"

/**
 * sum_dlistint - calculate the sum of doubly linked list int
 * @head: the head of doubly linked list int
 * Return: the sum of doubly linked list int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int s = 0;

	node = head;
	if (node)
	{
		while (node->prev)
			node = node->prev;

		while (node)
		{
			s += node->n;
			node = node->next;
		}
	}

	return (s);
}
