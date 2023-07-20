#include "main.h"

/**
 * int_index - searches for an integer.
 * @array: the array.
 * @size: size of array.
 * @cmp: compare function.
 * Return: the index of integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		int cResult = cmp(array[i]);
		if (cResult == 1)
			return (i);
	}

	return (-1);
}
