#include <stdio.h>

/**
* main-print single digit numbers of base 10
* followed by a new line
* Return: always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
