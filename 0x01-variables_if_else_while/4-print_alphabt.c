#include <stdlib.h>
#include <stdlib.h>
/**
 * main - prints all aplphbet exxcept e and q
 *
 * Return: Always return 0
 */
int main(void)
{char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');
	
	return (0);
}


