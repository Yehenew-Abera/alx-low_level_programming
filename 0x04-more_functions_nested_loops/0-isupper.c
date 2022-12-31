#include "main.h"
/**
 * _isuppe - checks if c is upper or not
 * Return: returns 1 for upper c or 0 for lower c
 * @c: value for checking
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
