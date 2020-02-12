#include "holberton.h"

/**
 * times_table - a function that prints every minute of the day.
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int num1;
	int num2;
	int prod;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			prod = num1 * num2;
			if (num1 < 1 && prod < 1)
			{
				_putchar('0' + prod);
				_putchar(',');
			}
			else if (prod <= 9 && num2 < 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
				_putchar(',');
			}
		}
		_putchar('\n');
	}

}
