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
		for (j = 0; j < 9; j++)
		{
			printf("%3d, ", j*increment);
		}
		printf("%3d\n", j * increment);
		increment++;
	}
}
