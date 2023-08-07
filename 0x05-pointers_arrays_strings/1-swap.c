#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first number.
 * @b: The second number.
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
