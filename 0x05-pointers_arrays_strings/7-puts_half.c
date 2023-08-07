#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: The string.
 */
void puts_half(char *str)
{
	int len, s, i;

	len = strlen(str);

	s = len / 2;

	if (len % 2 == 1)
		s++;

	for (i = s; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
