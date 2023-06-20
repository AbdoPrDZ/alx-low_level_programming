#include <stdio.h>

/**
 *  print_alphabet - Prints the alphabet in 
 */
void print_alphabet(void)
{
    char letter = 'a';
    
    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }
    
    _putchar('\n');
}

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
    for (int i = 0; i < 10; i++) {
        print_alphabet()
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
