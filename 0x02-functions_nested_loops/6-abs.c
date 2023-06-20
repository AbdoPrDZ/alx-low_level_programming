#include "main.h"
#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 * @n: The number.
 * 
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if(n < 0) {
		return (-n);
	} else {
		return (n);
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}