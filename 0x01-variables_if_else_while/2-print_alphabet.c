#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase
 *
 * Return: always return 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);

}
