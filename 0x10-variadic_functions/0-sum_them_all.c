#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the first parameter
 *
 * Return: interger value of the sum of all parameters or (0) if n is zero.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int sum;
	unsigned int i; /* counter for arguments */

	sum = 0;
	if (n == 0)
		return (0);
/* Initialize arguments to store all values after n */
	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);

	return (sum);
}
