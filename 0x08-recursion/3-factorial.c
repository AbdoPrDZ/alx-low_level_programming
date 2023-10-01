#include "main.h"

/**
 * factorial - computes the factorial of a number
 * @n: the number for which factorial is to be computed
 * Return: the factorial of the number. If n is negative, returns -1
 */
int factorial(int n)
{
	int f = 1;

	if (n < 0)
		return (-1);

	if (n > 0)
	{
		f *= n;
		f *= factorial(n - 1);
	}
	return (f);
}
