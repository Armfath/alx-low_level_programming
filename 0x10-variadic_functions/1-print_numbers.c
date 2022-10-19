#include "variadic_functions.h"
/**
 * print_numbers -  print its all given int
 * @n: num of int
 * @separator: int separator
 *
 * Return: sum of all of them
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_p;
	unsigned int i;

	va_start(arg_p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_p, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(arg_p);
	putchar('\n');
}
