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
/*	va_list ap; */
/*	int i; */
/*	char c; */
/*	int d; */
/*	float f; */
/*	char *s; */


  /* initialize va_list of arguments */
	va_start(ap, format);

	while (format)
	{
		switch (*format++)
		{
		case 'c':
			printf("%c\n", va_arg(ap, char));
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
		}
/*		if (fmt[i].typedata == format) */
/*			text = fmt[i].printfunction; */
	}
	printf("\n");
	va_end(ap);
}
