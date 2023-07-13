#include "main.h"

/**
 * func - allocates memory for an array, using malloc.
 * @nmemb: nmemb number
 * @size: element size.
 * Return: allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	return (arr);
}
