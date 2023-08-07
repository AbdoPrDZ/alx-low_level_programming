#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: Then length of line
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			putchar('_');
	}

	putchar('\n');
}
