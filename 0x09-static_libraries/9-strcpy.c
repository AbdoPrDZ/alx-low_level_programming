#include "main.h"

/**
 * _strcpy - copies the string pointed to by src.
 * @dest: The dest.
 * @src: The source.
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
