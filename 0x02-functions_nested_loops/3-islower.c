#include "main.h"
/**
 * _islower - check if the letter is lower or not
 * Return: 1 if letter is lowecaser, 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
