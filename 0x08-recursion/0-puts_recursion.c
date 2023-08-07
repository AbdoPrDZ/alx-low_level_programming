#include "main.h"

/**
 * _puts_recursion - prints a string using recursion.
 * @s: the string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

}
