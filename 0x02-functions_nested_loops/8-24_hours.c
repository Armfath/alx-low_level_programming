#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ;  m < 60 ; m++)
		{
			while (h < 10)
				_putchar('0');
			_putchar((h % 10) + '0');
			_putchar(':');
			while (m < 10)
				_putchar('0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
