#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - print square result
 * @n: int
 * @val: square root
 *Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
