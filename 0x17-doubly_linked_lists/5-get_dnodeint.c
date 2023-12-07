#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index from doubly lined list int
 * @head: the head of doubly linked list int
 * @index: the position of node
 * Return: the nod if exists, NULL if not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (!head || (int)index < 0)
		return (NULL);

	node = head;
	if (node && node->prev)
		while (node->prev)
			node = node->prev;

	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}

	return (NULL);
}
