#include "main.h"
#include <stdio.h>

/**
 * isMultiple - check if n is multiple of 3 or 5.
 * @n: The number.
 * Return: true if n is multiple of 3 or 5, false if no.
 */
bool isMultiple(int n)
{
	return (n % 3 == 0) || (n % 5 == 0);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum;

	for (i = 3; i < 1024; i++)
	{
		if (isMultiple(i))
		{
			sum +=i ;
		}
	}

	printf("Result: %d\n", sum);
	
	return (0);
}