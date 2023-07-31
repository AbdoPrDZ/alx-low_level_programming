#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t linked list.
 * @head: linked list head.
 * @index: index of node.
 * Return: index node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
