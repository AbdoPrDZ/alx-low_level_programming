#include "variadic_functions.h"

/**
 * sum_them_all - calc sum if all arguments.
 * @n: the length of arguments.
 * Return: the sum of args;
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	long int sum;
  	va_list args;

	if (n == 0)
		return (0);

  	va_start(args, n);

	for (i = 0; i < n; i++) {
		sum += va_arg(args, long int);
	}

	va_end(args);

	return (sum);
}
