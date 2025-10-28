#include "main.h"

/**
 * _puts - print the lenght of a string
 * @str: the string
 * Return: 0
 */

void _puts(char *str)
{
	int l;

	for (l = 0; (str[l] != '\n' && str[l] != '\0'); l++)
	{
		_putchar(str[l]);
	}
}
