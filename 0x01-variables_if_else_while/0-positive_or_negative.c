#include <stdlib.h>
#include <time.h>

/**
 * main - Always return 0
 *
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0) {
		puts("is zero");
	}	

	return (0);
}
