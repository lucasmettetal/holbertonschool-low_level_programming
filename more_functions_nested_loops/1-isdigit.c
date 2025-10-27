#include "main.h"

/**
 * _isdigit - checks if 'c' is digit or not
 * @c: The character to check
 * Return: 1 if c is lowercase and uppercase, 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
