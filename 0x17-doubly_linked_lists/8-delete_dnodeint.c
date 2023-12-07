#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node of double linked list int at index
 * @head: the head of doubly linked list int
 * @index: the position of nod to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *next, *prev;
	unsigned int i = 0;

	if (!*head || (int)index < 0)
		return (-1);

	while ((*head)->prev)
		*head = (*head)->prev;

	while (*head && i <= index)
	{
		if (i == index)
		{
			prev = (*head)->prev;
			next = (*head)->next;
			free(*head);

			if (prev)
				prev->next = next;
			if (next)
				next->prev = prev;

			if (i == 0)
				*head = next;
			else
				*head = prev;

			return (1);
		}
		*head = (*head)->next;
		i++;
	}

	return (-1);
}
