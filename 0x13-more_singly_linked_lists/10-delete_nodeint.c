#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head: linked list head.
 * @index: element index to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *before, *node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
	else
	{
		before = *head;
		for (i = 0; i < index - 1; i++)
		{
			if (before->next == NULL)
				return (-1);
			before = before->next;
		}

		node = before->next;
		before->next = node != NULL ? node->next : NULL;
		free(node);
	}

	return (1);
}
