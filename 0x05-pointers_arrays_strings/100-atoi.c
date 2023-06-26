#include "main.h"
#include <string.h>

/**
 * _pow - calculate the power
 * @n: The number.
 * @p: The power.
 * Return: The power of n.
 */
int _pow(int n, int p)
{
	int i, r;

	r = 1;

	for (i = 0; i < p; i++)
	{
		r *= n;
	}

	return (r);
}

/**
 * _atoi - convert string to int.
 * 
 * @str: The string.
 * Return: The int.
 */
int _atoi(char *str)
{
	int i, dlen, num, start;
	int digits[32];

	dlen = 0;
	num = 0;
	start = -1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (start == -1)
				start = i;

			digits[dlen] = str[i] - '0';
			dlen++;
		}
		else if (start != -1)
			break;
	}

	for (i = 0; i < dlen; i++)
	{
		num += _pow(10, dlen - i - 1) * digits[i];
	}

	if (start > 0 && str[start - 1] == '-')
		num = -num;

	
	return (num);
}
