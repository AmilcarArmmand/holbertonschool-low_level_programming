#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - function that prints a char
 * @ap: char argument type
 *
 * Return: void (No data type returned)
 */
char print_char(va_list ap)
{
	return (printf("%c\n", va_arg(ap, char)));
}

/**
 * print_integer - function that prints a integer
 * @ap: integer argument type
 *
 * Return: void (No data type returned)
 */
int print_integer(va_list ap)
{
	printf("%d\n", va_arg(ap, int));
}

/**
 * print_float - function that prints a char
 * @ap: float argument type
 *
 * Return: void (No data type returned)
 */
void print_float(va_list ap)
{
	printf("%f\n", va_arg(ap, double));
}

/**
 * print_string - function that prints a char
 * @ap: string argument type
 *
 * Return: void (No data type returned)
 */
void print_string(va_list ap)
{
	printf("%s\n", va_arg(ap, char *));
}

/**
 * print_all - a function that prints anything.
 * @format: data type format
 *
 * Return: void (No return data type returned).
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char c;
	int d;
	float f;
	char *s;
	void (*text)(va_list ap);

/*	i = 0; */
	dtype fmt[] = {
		{"c", print_char},
		{"d", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
  /* initialize va_list of arguments */
	va_start(ap, format);

	while (format)
	{
		if (fmt[i].typedata == format)
			text = fmt[i].printfunction;
	}

	printf("%d\n", text[i]);
	printf("\n");
	va_end(ap);
}
