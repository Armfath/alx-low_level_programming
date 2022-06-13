#include "main.h"

/**
* swap_int - swaps the values of two integers.
*
* @a: The 1st integer
* @b: The 2nd integer
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int p;

	p = *a;

	*a = *b;
	*b = p;
}
