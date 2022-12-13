#include <stdlib.h>
#include <stdlib.h>
/**
 * main - prints all aplphbet exxcept e and q
 *
 * Return: Always return 0
 */
int main(void)
{	
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar('c');
	}
	putchar('\n');
	return (0);
}


