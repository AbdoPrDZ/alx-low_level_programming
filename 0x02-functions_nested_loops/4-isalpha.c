#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks if a character is an alphabetic character
 * 
 * @c: The character to be checked
 * Return: 1 if the character is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if(c => 97 && c <= 122) {
		return (1);
	} else {
		return (0);
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
  