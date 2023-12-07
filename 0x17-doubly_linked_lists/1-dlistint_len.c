#include "lists.h"

/**
 * dlistint_len - get doubly linked list int length
 * @h: the head of doubly linked list int
 * Return: the length of doubly linked list int
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	if (h)
	{
		while (h->prev)
			h = h->prev;

		for (; h; c++)
			h = h->next;
	}

	return (c);
}
