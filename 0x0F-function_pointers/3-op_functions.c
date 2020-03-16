#include "function_pointers.h"

/**
 * op_add - a function that adds two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the difference between two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two numbers
 * @a: numerator
 * @b: denominator
 *
 * Return: the divisor of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that computes the modulus of two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the modulus of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
