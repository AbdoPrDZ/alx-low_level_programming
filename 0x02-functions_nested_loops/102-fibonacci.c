#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long long int first = 1;
	unsigned long long int second = 2;
	unsigned long long int next;
	int i;

	printf("%u, %u, ", first, second);

	for (i = 3; i < 50; i++)
	{
		unsigned long long next = first + second;
		printf("%u, ", next);
		first = second;
		second = next;
	}

	next = first + second;
	printf("%u\n", next);

	return (0);
}
