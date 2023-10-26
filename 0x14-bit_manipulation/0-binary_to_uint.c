#include "main.h"
#include <string.h>

/**
 * pw - calculate power n with p.
 * @n: the number.
 * @p: the power.
 * Return: the power of n.
 */
unsigned int pw(unsigned int n, unsigned int p)
{
	unsigned int r = n, i;

	if (p == 0)
		return (1);

	for (i = 0; i < p - 1; i++)
		r *= n;

	return (r);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary string.
 * Return: converted int or 0 when fail.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, d, len;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			d = 1;
		else if (b[i] == '0')
			d = 0;
		else
			return (0);

		num += d * pw(2, len - i - 1);
	}

	return (num);
}
