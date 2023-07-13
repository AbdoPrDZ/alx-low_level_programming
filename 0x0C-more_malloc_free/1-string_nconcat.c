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
	char *s;
	unsigned int len1, len2, len, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
		n = len2;

	len = len1 + n;

	s = malloc(len + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		if (i < len1)
			s[i] = s1[i];
		else
			s[i] = s2[i - len1];

	s[i] = '\0';

	return (s);
}
