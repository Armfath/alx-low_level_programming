
#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: number of parameter passed
 * @argv: array containing the parameters
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1 + *argv[0]);
	return (0);
}
