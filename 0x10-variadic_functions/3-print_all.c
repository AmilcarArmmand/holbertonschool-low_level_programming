#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - a function that prints anything.
 * @format: data type format
 *
 * Return: void (No return data type returned).
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *fmt;

  /* initialize va_list of arguments */
	va_start(ap, format);
	fmt = format;
	while (format)
	{
		switch (*(fmt++))
		{
		case 'c':
			printf("%c\n", va_arg(ap, int));
			break;
		case 'i':
			printf("%d\n", va_arg(ap, int));
			break;
		case 'f':
			printf("%f\n", va_arg(ap, double));
			break;
		case 's':
			printf("%s\n", va_arg(ap, char *));
			break;
		case '\0':
			printf("(nil)");
			break;
		default:
			fmt++;
			break;
		}
/*		break; */
		fmt++;
		break;
	}
	va_end(ap);
	printf("\n");
}
