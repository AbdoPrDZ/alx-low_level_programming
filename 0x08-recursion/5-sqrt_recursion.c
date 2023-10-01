#include "main.h"

/**
 * sqrt_helper - recursive helper function to find the square
 * @n: the number to find the square root of
 * @guess: the guess number to try it
 * Return: the square root of n, or -1 if n does not have a natural square
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess > n / 2)
		return (-1);

	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the square root of n, or -1 if n does not have a natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 2));
}
