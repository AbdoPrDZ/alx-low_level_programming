#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * Return: The data (n) stored in the head node or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *head_tmp;

	if (head == NULL || *head == NULL)
		return (0);

	head_tmp = *head;
	n = head_tmp->n;
	*head = (*head)->next;
	free(head_tmp);

	return (n);
}
