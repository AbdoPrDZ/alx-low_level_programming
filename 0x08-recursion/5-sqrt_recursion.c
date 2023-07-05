#include "main.h"

/**
 * _sqrt_recursion - computes the square root of a number.
 * @n: the number for which the square root is to be computed.
 * Return: the square root of the number.
 *         If the number doesn't have a perfect square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	int s;

	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	for (s = 1; s <= n / 2; s++)
		if (s * s == n)
			return (s);

	return (-1);
}
