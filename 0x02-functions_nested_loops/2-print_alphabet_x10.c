#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

    for (i = 0; i < 10; i++)
    {
        for (i = 97; i <= 122; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
    }

}
