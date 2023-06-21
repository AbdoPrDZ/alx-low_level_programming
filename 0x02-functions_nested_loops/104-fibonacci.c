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

	printf("%d, %d", first, second);

	for (i = 3; i <= 98; i++)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");
	return (0);
}
