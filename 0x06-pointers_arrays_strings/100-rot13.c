#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_letters = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = rot13_letters[j];
				break;
			}
		}
	}

	return (str);
}
