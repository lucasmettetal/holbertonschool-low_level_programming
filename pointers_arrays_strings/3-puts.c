#include "main.h"

/**
 * _puts - print the lenght of a string
 * @str: the string
 * Return: 0
 */

void _puts(char *str)
{
	int l = strlen(str) + 1;
	char *t = l;

	int i;

	for (i = 0; i < l; i++)
	{
		char ch = str[i];

		if (ch == '\n')
			break;
		t[i] = ch;
	}

	t[i] = 0;

	_puts(t);
}
