#include "main.h"
/**
 * main - prints 0-9
 * @c: numbers to be add
 * Return: 0 or 1
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
		
	}
	_putchar('\n');
}
