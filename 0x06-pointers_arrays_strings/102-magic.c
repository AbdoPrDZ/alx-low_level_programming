#include "main.h"

/**
 * main - Entry point of the program
 * Return: Always 0.
 */
int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p;

	p = &a[2];

	*(p + 0) = 98;

	printf("a[2] = %d\n", *(p + 0));

	return (0);
}
