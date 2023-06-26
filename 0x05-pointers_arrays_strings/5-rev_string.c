#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: The string.
 */
void rev_string(char *s)
{
	int len, i, j;
	char temp;

	len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
