#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: linked list head.
 * Return: Pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last, *nHead, *node;

	if (head == NULL || *head == NULL)
		return (NULL);

	last = *head;
	nHead = NULL;

	while (last != NULL)
	{
		node = last->next;
		last->next = nHead;
		nHead = last;
		last = node;
	}

	*head = nHead;

	return (nHead);
}
