#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all aplphbet exxcept e and q
 *
 * Return: Always return 0
 */
int main(void)
{	char la;

	for (la = 'a'; la <= 'z'; la++)
		if (la != 'e' && la != 'q')
			putchar(la);
	putchar('\n');
	return (0);
}


