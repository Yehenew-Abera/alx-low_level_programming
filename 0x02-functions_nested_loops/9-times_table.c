#include "main.h"

/**
 * main - prints the 9 times table, starting with 0
 *
 * Return: Always 0
 *
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j < 9)
			{
				k = i * j;
				_putchar(k + '0');
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			else if(j = 9)
			{
				k = i * j;
				_putchar(k + '0');
				_putchar(36);
			}
		}
		_putchar('\n');
	}
}
