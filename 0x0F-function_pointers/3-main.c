#include "3-calc.h"
/**
 * main - make an operation between two numbers
 * @argc: number of arguments passed
 * @argv: array containing the arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *operator;
	int (*calculor)(int, int);
	int num1, num2, calc;


	if (argc != 4)
	{
		printf("Error(98)\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	calculor = get_op_func(operator);
	if (!calculor || strlen(operator) != 1)
	{
		printf("Error(99)\n");
		exit(99);
	}
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error(100)\n");
		exit(100);
	}
	calc = calculor(num1, num2);
	printf("%d\n", calc);
	return (0);
}
