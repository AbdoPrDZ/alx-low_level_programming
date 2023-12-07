#include "lists.h"

/**
 * add_dnodeint - add node to doubly linked list int
 * @head: the head of doubly linked list int
 * @n: the value
 * Return: the head of doubly linked list int if success, NULL if not
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
