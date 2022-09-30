/**
 * main - print the programm name
 * @argc: number of parameter passed
 * @argv: array containing the parameters
 * Return: Always 0
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	printf(".%s\n", *argv + argc);
	return (0);
}
