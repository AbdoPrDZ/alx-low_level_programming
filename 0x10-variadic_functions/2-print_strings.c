#include "variadic_functions.h"

/**
 * print_strings - print strings arguments.
 * @separator: the separator string.
 * @n: the length of arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
