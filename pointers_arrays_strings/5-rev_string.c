#include "main.h"

/**
 * rev_string - write a function that reverses a string
 * @s: the string
 * Return: 0
 */

void rev_string(char *s)
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
