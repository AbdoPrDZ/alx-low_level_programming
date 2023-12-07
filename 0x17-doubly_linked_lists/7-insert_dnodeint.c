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
	dlistint_t *new, *prev;
	unsigned int i = 0;

	if (*h == NULL || (int)idx < 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	while ((*h)->prev)
		*h = (*h)->prev;

	while (*h && i <= idx)
	{
		if (i == idx)
		{
			prev = (*h)->prev;
			new->n = n;
			new->prev = prev;
			(*h)->prev = new;
			new->next = *h;
			prev->next = new;
			break;
		}
		*h = (*h)->next;
		i++;
	}

	return (*h);
}
