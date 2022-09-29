#include "main.h"
/**
 * _strlen_recursion - returns the len of a given string
 * @s: the string
 * Return: len of s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(++s) + 1);
}
