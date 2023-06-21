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

	for (i = 3; i < 29; i++) {
		next = first + second;
		if (next % 2 == 0)
		{
			printf("%d, ", next);
		}
		first = second;
		second = next;
	}
	next = first + second;
	if (next % 2 == 0)
	{
		printf("%d\n", next);
	}

	return (0);
}