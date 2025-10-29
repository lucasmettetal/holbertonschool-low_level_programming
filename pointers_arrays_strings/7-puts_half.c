#include "main.h"

/**
 * puts_half - prints half of a string.
 *         en commençant par le premier caractère
 * @str: pointeur vers la chaîne de caractères
 */

void puts_half(char *str)
{
	int i;
	int len = 0;
	int start = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	for (i = start; i < len; i++)
	{

		_putchar(str[i]);
	}
	_putchar('\n');
}
