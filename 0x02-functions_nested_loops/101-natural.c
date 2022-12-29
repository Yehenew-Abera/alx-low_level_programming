#include <stdio.h>

/**
 * main - prints multiples of 3 and 5 under 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + 1;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
