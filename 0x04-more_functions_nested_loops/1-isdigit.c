#include "main.h"

/**
 * _isdigit - checks for a digit character
 *
 * @c: The checked character
 *
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
