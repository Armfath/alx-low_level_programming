#include "main.h"
/**
 * _memset - fills the first n bytes
 * of the memory area pointed to by s with the constant byte b
 * @s: memory that should be filled
 * @b: the byte
 * @n: number of byte in memory that should be filled
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
