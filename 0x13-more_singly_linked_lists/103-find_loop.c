#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: address of the node, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	int i, j, len = 0;
	listint_t *node = head;
	void **adds;

	adds = malloc(sizeof(void *));
	if (adds == NULL)
		return (NULL);

	for (i = 0; node != NULL; i++, len++)
	{
		for (j = 0; j < i; j++)
			if ((void *)node == adds[j])
				return (node);
		adds = realloc(adds, sizeof(void *) * (len + 1));
		if (adds == NULL)
			break;
		adds[i] = (void *)node;
		node = node->next;
	}
	free(adds);

	return (NULL);
}
