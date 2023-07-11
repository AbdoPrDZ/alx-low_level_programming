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

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * (strlen(str) + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (long int) strlen(str); i++)
		s[i] = str[i];

	s[i] = '\0';

	return (s);
}
