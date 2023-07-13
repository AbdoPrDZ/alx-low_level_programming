#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the minimum value.
 * @max: the maximum value.
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;

	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (arr);
}
