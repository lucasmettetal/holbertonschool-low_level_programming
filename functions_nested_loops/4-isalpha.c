#include "main.h"

/**
 * _isalpha - return 0 if is lower and uppercase, return else if is otherwise
 * @c: The character to check
 * Return: 1 if c is lowercaseand uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
