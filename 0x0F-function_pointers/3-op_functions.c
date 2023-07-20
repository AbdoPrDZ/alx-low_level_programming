#include "3-calc.h"

/**
 * op_add - calc sum of add tow numbers
 * @a: first number.
 * @b: second number
 * Return: sub of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calc sum of sub tow numbers
 * @a: first number.
 * @b: second number
 * Return: sum of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calc sum of mult tow numbers
 * @a: first number.
 * @b: second number
 * Return: mul of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calc div of tow numbers
 * @a: first number.
 * @b: second number
 * Return: div of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - calc mod of tow numbers
 * @a: first number.
 * @b: second number
 * Return: mod of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
