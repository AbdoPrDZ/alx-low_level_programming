#include "lists.h"

/**
 * print_listint_safe - print listint in safe
 * @head: linked list head.
 * Return: number of printed nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	int i, j, len = 0;
	const listint_t *node = head, *loop_node = NULL;
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

	for (i = 0; i < len; i++, head = head->next)
		printf("[%p] %d\n", (void *)head, head->n);

	if (loop_node != NULL)
		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);

	return (len);
}
