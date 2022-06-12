#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *
 * @n: The number of times the character /
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
			_putchar(92);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
