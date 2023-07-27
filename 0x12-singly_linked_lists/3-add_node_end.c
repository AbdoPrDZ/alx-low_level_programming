#include "lists.h"
#include <string.h>

/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 * Return: Address of the new element (new tail), or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;

		end->next = new;
	}

	return (new);
}
