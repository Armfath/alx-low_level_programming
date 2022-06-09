#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l >= 0)
	{
		_putchar((l % 10) + '0');
		return (l);
	}
	else
	{
		_putchar(((-1 * l) % 10) + '0');
		return (-1 * l);
	}
}
