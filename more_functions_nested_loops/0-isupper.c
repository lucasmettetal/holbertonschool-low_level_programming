#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if 'n' is uppercase character or not
 * @c: The character to check
 * Return: 1 if c is lowercase and uppercase, 0 otherwise
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(':');
		_putchar(' ');
		_putchar('1');
	}
	else if (c >= 'a' && c <= 'z')
	{
		_putchar(':');
		_putchar(' ');
		_putchar('0');
	}
}
