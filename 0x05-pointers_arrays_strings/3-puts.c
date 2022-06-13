#include "main.h"

/**
 * _puts - prints a string
 *
 * @s: the string
 *
 * Return: void
 */

void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] == '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
