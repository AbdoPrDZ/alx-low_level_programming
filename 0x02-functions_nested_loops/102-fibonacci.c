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

	for (i = 1; i < 49; i++)
    {
		next = first + second;
		printf("%d, ", next);
		first = second;
		second = next;
	}
	printf("%d\n", first + second);

	return (0);
}
