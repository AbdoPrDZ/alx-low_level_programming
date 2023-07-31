#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: linked list head.
 * @idx: index of new node.
 * @n: number of new node.
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *before, *new, *current;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx > 0)
	{
		if (*head == NULL)
			free(new), return (NULL);

		before = *head;

		for (i = 0; i < idx - 1; i++)
		{
			if (before->next == NULL)
				free(new), return (NULL);

			before = before->next;
		}

		current = before->next;
		before->next = new;
		new->next = current;
	}
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
