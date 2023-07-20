#include "3-calc.h"

/**
 * main - calculate tow numbers.
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *opn;
	int (*opf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	opn = argv[2];

	opf = get_op_func(opn);

	if (opf != NULL)
	{
		printf("%d\n", opf(num1, num2));
		return (0);
	}

	printf("Error\n");
	exit(99);

	return (1);
}
