#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the linked list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast && fast->next && fast != slow)
	{
		count++;
		temp = slow;
		slow = slow->next;
		fast = fast->next->next;
		free(temp);
	}

	if (fast == slow)
	{
		count++;
		while ((*h) != slow)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		*h = NULL;
	}

	count++;
	while (slow)
	{
		count++;
		temp = slow;
		slow = slow->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}
