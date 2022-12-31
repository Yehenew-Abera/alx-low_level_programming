#include "main.h"
/**
 * print_most_numbers - prints 0-9 except 2 and 4
 * @c: numbers to be add
 * Return: 0 or 1
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2') || (c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
