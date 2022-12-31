#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int i, n = 100;

	for (i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
