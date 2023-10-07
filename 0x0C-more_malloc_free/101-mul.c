#include "main.h"

/**
 * main - multiplies two positive numbers.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	long unsigned int a, b;

	if (argc < 3)
		printf("ERROR\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%ld\n", a * b);

	return (0);
}
