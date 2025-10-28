#include "main.h"

/**
 * print_rev - print the lenght of a string in reverse
 * @s: the string
 * Return: 0
 */

void print_rev(char *s)
{
	int l = _strlen(s);
	int M = l / 2;
	char temp;

	for (int i = 0; i < M; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
