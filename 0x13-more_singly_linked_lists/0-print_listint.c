#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list.
 * @h: linked list head.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
		printf("%d\n", h->n), h = h->next;

	return (i);
}
