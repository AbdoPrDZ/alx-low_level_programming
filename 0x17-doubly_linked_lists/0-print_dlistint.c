#include "lists.h"

/**
 * print_dlistint - print all elements of doubly linked list int
 * @h: the head of doubly linked list int
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	if (h)
	{
		while (h->prev)
			h = h->prev;

		for (; h; c++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}

	return (c);
}
