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
	long int size1 = 0, size2 = 0, size, i, j;

	char *s;

	if (s1)
		size1 = strlen(s1);

	if (s2)
		size2 = strlen(s2);

	size = size1 + size2 + 1;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		s[i] = s1[i];

	for (j = 0; j < size2; j++, i++)
		s[i] = s2[j];

	s[i] = '\0';

	return (s);
}
