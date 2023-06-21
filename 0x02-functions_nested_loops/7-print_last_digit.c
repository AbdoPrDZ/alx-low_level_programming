#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 * Returns: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs(n % 10);

	putchar(last_digit + '0');

	return last_digit;
}
