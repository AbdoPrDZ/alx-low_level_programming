#include "main.h"
#include <stdio.h>
#include <gmp.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    mpz_t a, b, c;
    int i;

    // Initialize variables
    mpz_init(a);
    mpz_init(b);
    mpz_init(c);
    
    mpz_set_ui(a, 0);
    mpz_set_ui(b, 1);

	printf("%d, %d, ", first, second);

	for (i = 0; i < 48; i++)
	{
        mpz_add(c, a, b);
		printf("%d, ", next);
        mpz_set(a, b);
        mpz_set(b, c);
	}
	printf("%d\n", first + second);

    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(c);

	return (0);
}
