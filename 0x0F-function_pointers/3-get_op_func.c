#include "function_pointers.h"
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - a function that selects the function to perform the operation
 * @s: the operator passed as an argumant
 *
 * Return: the pointer to the function that performs the operation or NULL
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

	i = 0;

	while (ops[i].op != NULL)
	{
		if (!(strcmp(ops[i].op, s)))
			return ((ops[i]).f);
		i++;
	}
	return (NULL);
}
