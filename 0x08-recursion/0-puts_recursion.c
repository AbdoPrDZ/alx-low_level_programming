#include "main.h"

/**
 * _puts_recursion - prints a string using recursion.
 * @s: the string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');  // Print a new line when the end of the string is reached
		return;  // Exit the function
	}

	putchar(*s);  // Print the current character of the string
	_puts_recursion(s + 1);
}
