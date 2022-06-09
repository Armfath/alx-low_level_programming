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

	_putchar((l % 10) + '0');
	return (l);
}
