#include "main.h"

/**
 * print_name - prints a name.
 * @name: name want to print.
 * @f: printer function.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
