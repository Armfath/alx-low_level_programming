#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, m;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 10 ; i++)
		{
			m = i * j;
			if (m > 9)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
				_putchar((m % 10) + '0');
			if (i < 9 && m < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (i < 9 && m > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
