#include "lists.h"
#include <string.h>

/**
 * add_node - Add a new node at the beginning of a list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 * Return: Address of the new element (new head), or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
