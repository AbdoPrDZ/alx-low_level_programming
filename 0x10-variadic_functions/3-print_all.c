#include "variadic_functions.h"

/**
 * printChar - print char arg.
 * @args: arguments list.
 */
void printChar(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * printInt - print int arg.
 * @args: arguments list.
 */
void printInt(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * printFloat - print float arg.
 * @args: arguments list.
 */
void printFloat(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * printString - print string arg.
 * @args: arguments list.
 */
void printString(va_list args)
{
	char *s = va_arg(args, char*);

	printf("%s", (s != NULL) ? s : "(nil)");
}

/**
 * print_all - prints anything.
 * @format: format of arguments.
 */
void print_all(const char * const format, ...)
{
	tp_t tps[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printString},
		{NULL, NULL}
	};

	int i = 0, j = 0;

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (tps[j].tpc != NULL)
		{
			if (tps[i].tpc[0] == format[j])
			{
				tps[i].printer(args);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
