#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: separator to print between arguments
 * @n: number of arguments
 *
 * Return: void (No data return type) or NULL (Failure)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *text;

	va_start(arguments, n);

	for (i = 0; i <= n; i++)
	{
		text = va_arg(arguments, char *);
		if (text)
			printf("%s", text);
		else
			printf("nil");

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
