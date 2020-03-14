#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: numbers in argument list to be printed
 *
 * Return: void (No data type returned) or NULL (On failure)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

/* initialize valist for n number of arguments */
	va_start(arguments, n);
/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, unsigned int));

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
