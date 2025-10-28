#include "main.h"

/**
 * rev_string - write a function that reverses a string
 * @s: the string
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	int l = 0;
	int M;
	char temp;

	while (s[l] != '\0')
		l++;
	M = l / 2;

	for (i = 0; i < M; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
