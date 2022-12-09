#include <stdio.h>
/**
 * main - initial
 * Return: valus is 0
 */ 
int main(void)
{
	printf("The size of char:%i byte(s)", sizeof(char));
	printf("The size of int:%i byte(s)", sizeof(int));
	printf("The size of long int:%i byte(s)", sizeof(long int));
	printf("The size of long long: %i byte(s)", sizeof(long long int));
	printf("The size of double: %i byte(s)", sizeof(float));
	return (0);
}
