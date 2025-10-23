#include "main.h"

/**
 * _islower - return 0 if is lowercase, return else if is otherwise
 * @c: The character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
