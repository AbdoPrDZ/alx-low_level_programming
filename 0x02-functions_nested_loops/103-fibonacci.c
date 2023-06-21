#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, first = 1, second = 2, next;
	int sum = 2;

	for (i = 0; i < 29; i++)
	{
		next = first + second;
		if (next % 2 == 0)
		{
			sum += next;
		}
		first = second;
		second = next;
	}

	next = first + second;
	if (next % 2 == 0)
	{
		sum += next;
	}

	printf("%d\n", sum);

	return (0);
}
