#include "variadic_functions.h"
/**
 * print_strings -  print its all given str
 * @n: num of str
 * @separator: int separator
 *
 * Return: sum of all of them
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_p;
	unsigned int i;

	va_start(arg_p, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(arg_p, char *));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
		else if (separator == NULL && i < (n - 1))
			printf("(nil)");
	}
	va_end(arg_p);
	putchar('\n');
}
