#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: integer n
 *
 * Return: void
 */

void print_to_98(int n)
{
	for (n ; n <= 98 ; n++)
	{
		printf(%d, n);
		if (n < 98)
			printf(", ");
	}
	_putchar('\n');
}
