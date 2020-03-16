#include "function_pointers.h"

/**
 * main - a program that performs simple mathematical operations
 * @argc: the number of arguments given to the function
 * @argv: the argument vectors given to the function
 *
 * Return: Result of operation or exit(98), exit(99), exit(100) on error.
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4) /* if number of args is wrong print Error and exit 98 */
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(a, b));
	return (0);
}
