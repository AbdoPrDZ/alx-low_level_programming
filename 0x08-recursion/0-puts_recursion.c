#include "main.h"

/**
 * _puts_recursion - prints a string using recursion.
 * @s: the string to be printed.
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		putchar(s[i]);

	putchar('\n');
}
