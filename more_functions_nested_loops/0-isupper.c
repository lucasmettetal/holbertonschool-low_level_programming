#include "main.h"
#include <stdio.h>

/**
 * print_sign - return 1 if greater zero, return 0 if is 0; return -1 less zero
 * @c: The character to check
 * Return: 1 if c is lowercase and uppercase, 0 otherwise
 */

int print_sign(int c)

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
