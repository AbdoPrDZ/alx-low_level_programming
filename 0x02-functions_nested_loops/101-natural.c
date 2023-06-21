#include "main.h"
#include <stdio.h>

/**
 * isMultiple - check if n is multiple of 3 or 5.
 * @n: The number.
 * Return: true if n is multiple of 3 or 5, false if no.
 */
// int isMultiple(int n)
// {
// 	if ((n % 3 == 0) || (n % 5 == 0))
// 	{
// 		return (1);
// 	}
// 	else
// 	{
// 		return (0);
// 	} 
// }

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
		if (isMultiple(i) == 1)
		{
			sum +=i ;
		}
	}

	printf("Result: %d\n", sum);
	
	return (0);
}