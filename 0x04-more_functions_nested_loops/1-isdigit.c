#include "main.h"

/**
 * _isupper - Checks if a character is digital.
 * @c: The character.
 * Return: 1 if the character is digital, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
