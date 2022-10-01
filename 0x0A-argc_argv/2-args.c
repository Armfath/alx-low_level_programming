
#include <stdio.h>
/**
 * main - print all passed arguments
 * @argc: number of parameter passed
 * @argv: array containing the parameters
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
