#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the string.
 * @accept: pointer to the bytes to accept.
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p = s;

	while (*p != '\0' && _strchr(accept, *p) != NULL)
	{
		count++;
		p++;
	}

	return (count);
}
