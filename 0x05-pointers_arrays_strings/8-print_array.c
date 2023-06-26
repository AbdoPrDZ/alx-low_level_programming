#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: The int array.
 * @n: The length of prints.
 */
void print_array(int *a, int n)
{
	int i, num, divisor, digit;

	for (i = 0; i < n; i++)
	{
		num = a[i];
		if (num < 0)
		{
			putchar('-');
			num = -num;
		}

		divisor = 1;
		while (num / divisor > 9)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			digit = num / divisor;
			putchar('0' + digit);
			num %= divisor;
			divisor /= 10;
		}

		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
}
