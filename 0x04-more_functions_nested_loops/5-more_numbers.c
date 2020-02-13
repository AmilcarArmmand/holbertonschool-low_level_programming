#include "holberton.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14.
 *
 */
void more_numbers(void)
{
	int i;
	int j;
	int num1;
	int num2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				num1 = j / 10;
				num2 = j % 10;
				_putchar('0' + num1);
			}
			else
			{
				num2 = j;
			}
			_putchar('0' + num2);
		}
		_putchar('\n');
	}
}
