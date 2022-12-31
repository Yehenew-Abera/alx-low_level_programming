#include <stdio.h>

/**
 *main : prints fizz_buzz
 *@i:
 *Return: always 0
 */
int main(void)
{
	int i;

	for(i = 1; i <= 100; i++)
	{
		if(((i % 3) || (i % 5)) == 0)
			printf("%d FizzBuzz ", i);
		else if((i % 3) == 0)
			printf("%d Fizz ", i);
		else if((i % 5) == 0)
			printf("%d Buzz ", i);
		else
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}
