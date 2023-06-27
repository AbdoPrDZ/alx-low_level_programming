#include "main.h"
#include <string.h>
#include <limits.h>

/**
 * _atoi - convert string to int.
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

			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (str[i] - '0') > INT_MAX % 10))
			{
				if (start > 0 && str[start - 1] == '-')
					return INT_MIN;
				else
					return INT_MAX;

			}

			num = num * 10 + (str[i] - '0');
		}
		else if (start != -1)
			break;
	}

	if (start > 0 && str[start - 1] == '-')
		num = -num;

	return (num);
}
