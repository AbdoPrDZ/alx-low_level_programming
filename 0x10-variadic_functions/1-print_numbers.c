#include "variadic_functions.h"

/**
 * print_numbers - print int arguments.
 * @separator: the separator string.
 * @n: the length of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
