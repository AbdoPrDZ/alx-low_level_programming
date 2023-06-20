#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *  print_alphabet - Prints the alphabet in 
 */
void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z') {
		putchar(letter);
		letter++;
	}
	
	putchar('\n');
}