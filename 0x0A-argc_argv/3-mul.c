#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication.
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if success 1 if has error.
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("ERROR");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
