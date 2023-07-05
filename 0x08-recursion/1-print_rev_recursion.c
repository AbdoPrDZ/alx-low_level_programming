#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse using recursion.
 * @s: the string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	int i, len = strlen(s);

	for (i = 0; s[i] != '\0'; i++)
		if (s[len - i - 1] != '\n')
			putchar(s[len - i - 1]);

	putchar('\n');
}
