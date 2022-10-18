#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: num of parameters
 *
 * Return: sum of all of them
 */
int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	va_list arg_p;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg_p, n);
	for (i = 0; i < n; i++)
		res += va_arg(arg_p, int);
	va_end(arg_p);
	return (res);
}
