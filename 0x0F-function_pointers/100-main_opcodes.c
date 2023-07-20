#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	unsigned char *code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	code = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", code[i]);
		if (num_bytes > i + 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
