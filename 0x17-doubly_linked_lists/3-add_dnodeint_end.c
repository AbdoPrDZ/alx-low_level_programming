#include "lists.h"

/**
 * add_dnodeint_end - add node to doubly linked list int in the end
 * @head: the head of doubly linked list int
 * @n: the value
 * Return: the head of doubly linked list int if success, NULL if not
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head)
	{
		end = *head;

		while (end->next)
			end = end->next;

		new->prev = end;
		end->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}

	return (*head);
}
