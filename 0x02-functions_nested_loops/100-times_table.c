#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15) {
		int i, j, increment;

		increment = 0;

		for (i = 0; i < n; i++)
		{
			printf("0, ");
			for (j = 1; j < n - 1; j++)
			{
				printf("%4d, ", j * increment);
			}
			printf("%4d\n", j * increment);
			increment++;
		}
	}
}