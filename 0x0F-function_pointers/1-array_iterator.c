#include "function_pointers.h"

/**
 * array_iterator - executes a action on each element of array.
 * @array: the array.
 * @size: size of array.
 * @action: the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
