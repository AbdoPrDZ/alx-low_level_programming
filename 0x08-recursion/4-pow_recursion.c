#include "main.h"

/**
 * _pow_recursion - computes the power of a number
 * @x: the base number
 * @y: the exponent
 * Return: the result of x raised to the power of y
 *         If x is 1 or y is 0, returns 1
 *         If y is negative, returns -1
 */
int _pow_recursion(int x, int y)
{
	int r = x;

	if (x == 1 || y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	if (y > 1)
		r *= _pow_recursion(r, y - 1);

	return (r);
}
