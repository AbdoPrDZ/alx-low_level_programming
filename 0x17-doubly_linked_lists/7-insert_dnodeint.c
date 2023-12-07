#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node to doubly linked list int at idx
 * @h: the head of doubly linked list int
 * @idx: the position of new node
 * @n: the value of new nod
 * Return: the head of doubly linked list int if success, NULL is fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node, *prev;
	unsigned int i = 0;

	if (*h == NULL || (int)idx < 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	node = *h;
	prev = NULL;
	while (node->prev)
		node = node->prev;

	while (node && i < idx)
	{
		prev = node;
		node = node->next;
		i++;
	}

	if (i == idx)
	{
		new->prev = prev;
		new->n = n;
		new->next = node;

		if (prev)
			prev->next = new;
		if (node)
			node->prev = new;
		if (idx == 0)
			*h = new;

		return (new);
	}
	free(new);

	return (NULL);
}
