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

		for (i = size; i >= 0; i--)
		{
			for (j = 0; j < size; j++)
			{
				if (j < i) {
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
		
	}
	else
	{
		_putchar('\n');
	}
}
