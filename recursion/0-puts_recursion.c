#include "main.h"

/**
 * _puts_recursion - puts a string in recursion
 * @s: string to search
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
