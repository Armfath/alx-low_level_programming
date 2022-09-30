
#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: number of parameter passed
 * @argv: array containing the parameters
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", *argv[0] + argc - '0' + 1);
	return (0);
}
