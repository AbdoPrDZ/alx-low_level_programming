#include "main.h"
#include <string.h>

/**
 * _strdup - check the code.
 * @str: The String.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *s;
	long int i;

	if (strlen(str) == 0)
		return (NULL);

	s = malloc(sizeof(char) * (strlen(str)));

	for (i = 0; i < strlen(str); i++)
		s[i] = str[i];

	return (s);
}
