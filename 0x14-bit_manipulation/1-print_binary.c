#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int i, len;
	char *s;

	if (n == 0)
		putchar('0');
	else
	{
		tmp = n;
		for (; tmp > 0; len++)
			tmp = tmp / 2;

		s = malloc(len * sizeof(int));

		for (i = 0; n > 0; i++)
			s[i] = '0' + n % 2, n = n / 2;

		for (; i >= 0; i--)
			putchar(s[i]);

		free(s);
	}
}
