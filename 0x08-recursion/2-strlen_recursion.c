#include "main.h"

/**
 * _strlen_recursion - computes the length of a string using recursion.
 * @s: the string for which length is to be computed.
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
		return (0);

	len += _strlen_recursion(s + 1);

	return (len);
}
