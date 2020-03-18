#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arguments);
void print_integer(va_list arguments);
void print_float(va_list arguments);
void print_string(va_list arguments);


/**
 * struct datatype - struct defining data type to be printed
 * @typedata: the type of data to be printed
 * @printfunction: pointer to function for printing the typedata data type
 *
 * Description: struct that stores the name, age, and owner of a dog.
 */
typedef struct datatype
{
	char *typedata;
	void (*printfunction)();
} dtype;

#endif /* VARIADIC_FUNCTIONS_H */
