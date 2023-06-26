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
	int i, num, start;

	num = 0;
	start = -1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (start == -1)
				start = i;

            num = num * 10 + (str[i] - '0');
		}
		else if (start != -1)
			break;
	}

	if (start > 0 && str[start - 1] == '-')
		num = -num;

	return (num);
}
