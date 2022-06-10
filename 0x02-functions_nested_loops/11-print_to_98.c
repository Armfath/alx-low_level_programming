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
	int i;

	for (i = n ; i <= 98 ; i++)
	{
		printf("%d", i);
		if (n < 98)
			printf(", ");
	}
	_putchar('\n');
}
