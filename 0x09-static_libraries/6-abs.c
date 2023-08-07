#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of a number.
 * @n: The number.
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
