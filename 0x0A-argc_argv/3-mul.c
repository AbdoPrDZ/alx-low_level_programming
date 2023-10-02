#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication.
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if success 1 if has error.
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");

		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
