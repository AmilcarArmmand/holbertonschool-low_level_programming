#include "holberton.h"
/**
 * print_times_table - a function that prints n times table, starting with 0.
 *
 */
void print_times_table(int n)
{
	int num1, num2, prod;

	if (n >= 0 && n < 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				prod = num1 * num2;
				if (num2 == 0)
				{
					_putchar('0' + prod);
				}
				else if (prod < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod / 10);
					_putchar('0' + prod % 10);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + prod / 100);
					_putchar('0' + prod / 10);
					_putchar('0' + prod % 10);
				}
			}
			_putchar('\n');
		}
	}
	else
		return;
}
