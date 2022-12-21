#include "main.h"
/**
 *_abs - check the number and returns its absolute value
 *@n: this number will be checked
 *Return: returns absolute value of a number
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}

