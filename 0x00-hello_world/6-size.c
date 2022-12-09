#include <stdio.h>
/**
 * main - initial
 * Return: valus is 0
 */ 
int main(void)
{
	printf("The size of char:%i byte(s)\n", sizeof(char));
	printf("The size of int:%i byte(s)\n", sizeof(int));
	printf("The size of long int:%i byte(s)\n", sizeof(long int));
	printf("The size of long long: %i byte(s)\n", sizeof(long long int));
	printf("The size of double: %i byte(s)\n", sizeof(float));
	return (0);
}
