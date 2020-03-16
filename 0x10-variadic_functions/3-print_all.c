#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - function that prints a char
 * @arguments: char argument type
 *
 * Return: void (No data type returned)
 */
void print_char(va_list arguments)
{
	printf("%c\n", va_arg(arguments, int));
}

/**
 * print_integer - function that prints a char
 * @arguments: integer argument type
 *
 * Return: void (No data type returned)
 */
void print_integer(va_list arguments)
{
	printf("%d\n", va_arg(arguments, int));
}

/**
 * print_float - function that prints a char
 * @arguments: float argument type
 *
 * Return: void (No data type returned)
 */
void print_float(va_list arguments)
{
	printf("%f\n", va_arg(arguments, double));
}

/**
 * print_string - function that prints a char
 * @arguments: string argument type
 *
 * Return: void (No data type returned)
 */
void print_string(va_list arguments)
{
	printf("%s\n", va_arg(arguments, char *));
}

/**
 * print_all - a function that prints anything.
 * @format: data type format
 *
 * Return: void (No return data type returned).
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
/*	unsigned int i; */
	char *text;

/*	i = 0; */

/*	dtype fmt[] = { */
/*		{"%c", print_char}, */
/*		{"%d", print_integer}, */
/*		{"%f", print_float}, */
/*		{"%s", print_string}, */
/*		{NULL, NULL} */
/*	}; */
  /* initialize valist for n number of arguments */
	va_start(arguments, format);
	text = va_arg(arguments, char *);
	{
/*		if (!(strcmp(dtype[i].typedata, format))) */
/*			dtype[i].printfunction(arguments); */
	}
	printf("%s\n", text);
	printf("\n");
	va_end(arguments);
}
