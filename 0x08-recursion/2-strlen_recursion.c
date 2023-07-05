#include "main.h"

/**
 * _strlen_recursion - computes the length of a string using recursion.
 * @s: the string for which length is to be computed.
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	
	return (len);
}
