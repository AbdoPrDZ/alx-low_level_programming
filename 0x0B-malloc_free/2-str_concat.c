#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: Thr first string.
 * @s2: Thr second string.
 * Return: concatenates of two strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	long int size, i;

	size = strlen(s1) + strlen(s2);

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		if (i < strlen(s1))
			s[i] = s1[i];
		else
			s[i] = s2[i - strlen(s1)];

	return (s);
}
