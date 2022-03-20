#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: c is an ascii character
 *
 * Return: 1 if c is lowercase
 * 0 if c is anything else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
