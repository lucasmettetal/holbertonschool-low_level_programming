#include "main.h"

/**
 * _isupper - checks if 'n' is uppercase character or not
 * @c: The character to check
 * Return: 1 if c is lowercase and uppercase, 0 otherwise
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}
