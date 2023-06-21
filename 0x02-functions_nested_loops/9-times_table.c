#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the multiplication table in a specific format
 */
void times_table(void)
{
	int i, j, increment;

	increment = 0;

	for (i = 0; i < 10; i++)
	{
		printf("0, ");
		for (j = 1; j < 9; j++)
		{
			printf("%2d, ", j * increment);
		}
		printf("%2d\n", j * increment);
		increment++;
	}
}
