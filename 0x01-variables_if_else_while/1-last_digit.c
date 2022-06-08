#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
		printf("%d and is greater than 5\n", lastDigit);
	else is (lastDigit == 0)
		printf("%d and is 0\n", lastDigit);
	else
		printf("%d and is less than 6 and not 0", lastDigit);

	return (0);
}
