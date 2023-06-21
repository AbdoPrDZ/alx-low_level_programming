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
    mpz_t first, second, next;
    int i;

    mpz_init(first);
    mpz_init(second);
    mpz_init(next);
    
    mpz_set_ui(first, 0);
    mpz_set_ui(second, 1);

	printf("%d, %d, ", first, second);

	for (i = 0; i < 48; i++)
	{
        mpz_add(next, first, second);
		printf("%d, ", next);
        mpz_set(first, second);
        mpz_set(second, next);
	}
	printf("%d\n", first + second);

    mpz_clear(first);
    mpz_clear(second);
    mpz_clear(next);

	return (0);
}
