#include "main.h"
#include <string.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: The string.
 */
void _puts(char* str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
