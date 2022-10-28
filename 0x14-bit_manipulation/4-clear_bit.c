#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: the num
 * @index: idx
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	set = ~(set << index);
	if (set == 0)
		return (-1);
	*n = (*n & set);

	return (1);
}
