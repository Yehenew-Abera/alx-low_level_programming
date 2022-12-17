#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: always return 0
 */

int main(void)
{
	char n;

	char la;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);
	putchar('\n');
	return (0);
}
