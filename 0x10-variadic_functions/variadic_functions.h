#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct tp - Struct tp
 *
 * @tpc: The type code
 * @f: The printer function
 */
typedef struct tp
{
	char* tpc;
	void (*printer)(va_list args);
} tp_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* MAIN_H */
