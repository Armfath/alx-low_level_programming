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
	for (; i <= 98 ; i++)
	{
		printf("%d", i);
		if (i < 98)
			printf(", ");
	}
	_putchar('\n');
}
