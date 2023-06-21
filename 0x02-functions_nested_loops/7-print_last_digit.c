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

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs(n % 10);

	putchar(last_digit + '0');

	return (last_digit);
}
