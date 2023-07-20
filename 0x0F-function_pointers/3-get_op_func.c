#include "3-calc.h"

/**
 * search_for_op - search for operation index
 *
 * @s: operation name.
 * @ops: operations array.
 * @index: current index.
 * Return: index of operation or -1 if not found.
 */
int search_for_op(char *s, op_t ops[], int index)
{
	if (strcmp(ops[index].op, s) == 0)
		return (index);

	index++;
	if (ops[index].op != NULL)
		return (search_for_op(s, ops, index));

	return (-1);
}

/**
 * get_op_func - getting operation pointer function.
 * @s: operation name.
 * Return: the pointer to the function, or NULL when not found.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = search_for_op(s, ops, 0);

	if (i != -1)
		return (ops[i].f);

	return (NULL);
}
