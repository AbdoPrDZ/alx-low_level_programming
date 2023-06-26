#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: The string.
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = len / 2; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
