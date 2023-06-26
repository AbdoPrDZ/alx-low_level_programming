#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: The string.
 */
void puts_half(char *str)
{
	int len, start_index, i;

	len = strlen(str);

	start_index = len / 2;

	if (len % 2 == 1)
		start_index++;

	for (i = len / 2; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
