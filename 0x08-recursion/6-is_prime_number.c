#include "main.h"

/**
 * is_prime_number_helper - recursive helper function.
 * @n: the number to be checked.
 * @i: the current divisor.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 2)
		return (n == 2);

	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (is_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime number.
 * @n: the number to be checked.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_number_helper(n, 2));
}
