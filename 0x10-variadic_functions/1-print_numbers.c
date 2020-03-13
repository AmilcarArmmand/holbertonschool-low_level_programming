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

	if (!(separator))
		exit(0);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, unsigned int));

		if (i < (n - 1))
			printf("%c", *separator);
		else
		       printf("\n");
	}
	va_end(arguments);
}
