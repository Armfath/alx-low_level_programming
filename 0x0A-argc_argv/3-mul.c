#include <stdio.h>
#include <stdlib.h>
/**
 * main - print mul of two passed arg
 * @argc: number of parameter passed
 * @argv: array containing the parameters
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
