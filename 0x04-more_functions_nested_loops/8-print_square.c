#include "main.h"
/**
 * print_square - prints square
 * @size: prints size
 * Return: returns 0 always
 */
void print_square(int size)
{
	int i, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
