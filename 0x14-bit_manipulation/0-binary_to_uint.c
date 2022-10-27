#include "main.h"
/**
 * binary_to_uint - convert from bin to dec
 * @b: bin num
 *
 * Return: dec
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0, num, bas = 1, n, rest = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		n = b[i] - 48;
		if (n != 0 && n != 1)
			return (0);
		i++;
	}
	num = atoi(b);
	while (num > 0)
	{
		rest = num % 10;
		dec += rest * bas;
		bas *= 2;
		num /= 10;
	}

	return (dec);
}