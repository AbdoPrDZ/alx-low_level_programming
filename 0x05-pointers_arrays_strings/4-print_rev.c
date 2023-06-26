#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse.
 * @str: The string.
 */
void print_rev(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = len - 1; i >= 0; i--)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
