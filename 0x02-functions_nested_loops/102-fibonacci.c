#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int first = 1;
	unsigned int second = 2;
	unsigned int next;
	int i;

	printf("%u, %u, ", first, second);

	for (i = 3; i < 50; i++)
	{
		unsigned next = first + second;
		printf("%u, ", next);
		first = second;
		second = next;
	}

	next = first + second;
	printf("%u\n", next);

	return (0);
}
