#include "main.h"
#include <string.h>

/**
 * _atoi - convert string to int.
 * @str: The string.
 * Return: The int.
 */
int _atoi(char *str)
{
	int i, num, start, sign;

	num = 0;
	start = -1;
	sign = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '-')
			sign = -1;

		if (str[i] >= '0' && str[i] <= '9')
		{
			if (start == -1)
				start = i;

			num = num * 10 + (str[i] - '0');
		}
		else if (start != -1)
			break;
	}

	num *= sign;

	return (num);
}
