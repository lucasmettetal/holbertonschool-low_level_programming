#include "main.h"

/**
 * _puts - print the lenght of a string
 * @str: the string
 * Return: 0
 */

void _puts(char *str)
{
	int l;

	for (l = 0; (str[l] != '\n' && stl[l] != '\0'); l++)
	{
		_puts(str[l])
	}
}
