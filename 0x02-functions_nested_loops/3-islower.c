#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks if a character is lowercase.
 * 
 * @c: The character.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c) {
	if(c >= 97 && c <= 122) {
		return (1);
	} else {
		return (0);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}