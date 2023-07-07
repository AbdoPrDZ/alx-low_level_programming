#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the result of the multiplication.
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if success 1 if has error.
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("ERROR");

		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;

		while (arg[j] != '\0') {
			if (arg[j] != '-' && !isdigit(arg[j])) {
				printf("Error\n");

				return (1);
			}
			j++;
        }

		sum *= atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
