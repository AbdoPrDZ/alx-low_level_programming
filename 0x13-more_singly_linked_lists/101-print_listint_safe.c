#include "lists.h"

/**
 * print_listint_safe - print listint in safe
 * @head: linked list head.
 * Return: number of printed nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	int i, j, len = 0, loop = 0;
	const listint_t *node = head;
	void *add, **adds;

	adds = malloc(sizeof(void *));
	if (adds == NULL)
		return (0);

	for (i = 0; node != NULL; i++, len++)
	{
		add = (void *)node;
		for (j = 0; j < i; j++)
			if (add == adds[j])
			{
				loop = 1;
				break;
			}
		if (loop == 1)
			break;
		adds = realloc(adds, sizeof(void *) * (len + 1));
		if (adds == NULL)
			break;
		adds[i] = add;
		node = node->next;
	}
	free(adds);

	for (i = 0; i < len; i++, head = head->next)
		printf("[%p] %d\n", (void *)head, head->n);

	return (len);
}
