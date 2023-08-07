#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: a size of the triangle.
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i - 1)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
