#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: string length.
 * Return: concatenated strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;

	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > strlen(s2))
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0, i = 0; i < len1; i++, j++)
		s[j] = s1[i];

	for (i = 0; i < len1 + n; i++, j++)
		s[j] = s2[i];

	s[j] = '\0';

	return (s);
}
