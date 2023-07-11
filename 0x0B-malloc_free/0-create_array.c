#include "main.h"

/**
 * create_array - creates an array of specific char.
 * @size: the size of array.
 * @c: the initialize char.
 * Return: a pointer to the array, or NULL if it fails and c is O.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size <= 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (int) size; i++)
		a[i] = c;

	return (a);
}
