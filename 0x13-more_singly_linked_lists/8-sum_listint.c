#include "lists.h"

/**
 * sum_listint - sum of all the data (n).
 * @head: linked list head.
 * Return: sum of all data n.
 */
int sum_listint(listint_t *head)
{
	int i, s;

	for (i = 0; head != NULL; i++)
		s = head->n, head = head->next;

	return (s);
}
