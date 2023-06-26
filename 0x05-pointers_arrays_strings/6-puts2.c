#include "main.h"
#include <string.h>

/**
 * puts2 - prints a string, followed by a new line, to stdout.
 * @str: The string.
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
