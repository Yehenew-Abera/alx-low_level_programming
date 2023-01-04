#include "main.h"
/**
 * factorial - prints factorial
 * @n: integer fot factorial
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if	(n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
