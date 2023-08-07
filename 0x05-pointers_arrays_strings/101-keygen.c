#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generating password.
 * Return: 0.
 */
int main(void)
{
	srand(time(NULL));

	char password[16];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	for (i = 0; i < 16; i++)
	{
		int index = rand() % (sizeof(charset) - 1);

		password[i] = charset[index];
	}

	password[16] = '\0';

	printf("%s\n", password);

	return 0;
}
