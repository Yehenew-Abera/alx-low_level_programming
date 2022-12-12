#include <stdio.h>
#include <limits.h>
/**
 * main - Entry line
 *
 * Return: returns 0
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("The number %d is positive\n", n);
	else if (n < 0)
		printf("The number %d is negative\n", n);
	else
		printf("This number is: %d\n", n);
	return (0);
}