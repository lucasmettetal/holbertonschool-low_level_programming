#include "main.h"

/**
 * print_sign - return 1 if greater zero, return 0 if is 0; return -1 less zero
 * @n: The character to check
 * Return: 1 if c is lowercase and uppercase, 0 otherwise
 */

int print_sign(int n)

{
	if (n > 0 && n != 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
