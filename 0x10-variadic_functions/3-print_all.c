#include "variadic_functions.h"
/**
 */
void print_all(const char * const format, ...)
{
	int i, n = 0;
	char *str;
	va_list arg_p;

	va_start(arg_p, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's')
			n++;
		i++;
	}
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg_p, int));
				break;
			case 'i':
				printf("%d", va_arg(arg_p, int));
				break;
			case 'f':
				printf("%f", va_arg(arg_p, double));
				break;
			case 's':
				printf("%s", va_arg(arg_p, char *));
				break;
			case 0:
				printf("(nil)");
					break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && i < n)
			printf(", ");
		i++;
	}
	va_end(arg_p);
	printf("\n");
}
