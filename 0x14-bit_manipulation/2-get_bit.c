#include "main.h"

/**
 * get_bit - get the value of a bit at a given index.
 * @n: the number from which to get the bit.
 * @index: the index of the bit to get.
 * Return: the value of the bit at index `index` or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;

	return ((n & mask) != 0);
}
