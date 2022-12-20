#include "main.h"

/**
 * print_alphabet_x10 -Function prints 10 times the alphabet.
 * Return: Returns void
 */
void print_alphabet_x10(void)
{
	char la;
	int i = 0;

	while (i < 10)
	{
		for (la = 'a'; la <= 'z'; la++)
		{
			_putchar(la);
		}
	_putchar('\n');
	i++;
	}
}
