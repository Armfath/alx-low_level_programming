#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: The number
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1*n);
	}
	else
		return (n);
}
