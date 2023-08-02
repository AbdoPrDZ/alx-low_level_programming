#include "lists.h"

/**
 * func - check the code.
 * Return: Always 0.
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;

	for (i = 0; head != NULL; i++)
		printf("[%p] %d\n", (void *)head, head->n), head = head->next;

	return (i);
}
