#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the h of the linked list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	int i, j, len = 0;
	listint_t *node = *h, *loop_node = NULL;
	void **adds;

	adds = malloc(sizeof(void *));
	if (adds == NULL)
		return (0);

	for (i = 0; node != NULL; i++, len++)
	{
		for (j = 0; j < i; j++)
			if ((void *)node == adds[j])
			{
				loop_node = node;
				break;
			}
		if (loop_node != NULL)
			break;
		adds = realloc(adds, sizeof(void *) * (len + 1));
		if (adds == NULL)
			break;
		adds[i] = (void *)node;
		node = node->next;
	}
	free(adds);

	for (i = 0; i < len; i++)
	{
		node = *h;
		*h = (*h)->next;
		free(node);
	}

	*h = NULL;

	return (len);
}
