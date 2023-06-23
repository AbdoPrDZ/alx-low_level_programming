#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers, from 0 to 9, except 2 and 4.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 1; i < 10; i++)
	{
		if (i != 2 || i != 4)
		{
			putchar('0' + i);
	   }
	}
	putchar('\n');
}
