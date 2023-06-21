#include "main.h"
#include <stdio.h>

/**
 *  print_alphabet - Prints the alphabet in 
 */
void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	
	putchar('\n');
}

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		print_alphabet()
	}
}
