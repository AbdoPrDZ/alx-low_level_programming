#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: linked list head.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *first, *nHead;

	if (head == NULL)
		return (0);

	first = *head;
	nHead = first->next;
	*head = nHead;

	return (first->n);
}
