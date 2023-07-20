#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
/*op_add: returns the sum of a and b. int op_add(int a, int b);
op_sub: returns the difference of a and b. int op_sub(int a, int b);
op_mul: returns the product of a and b. int op_mul(int a, int b);
op_div: returns the result of the division of a by b. int op_div(int a, int b);
op_mod: returns the remainder of the division of a by b. int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);*/

#endif /* MAIN_H */
