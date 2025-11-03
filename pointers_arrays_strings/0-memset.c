#include "main.h"

/**
 * _memset - encodes a string into 1337
 * @s: the string to be changed
 * @b: the character to fill with
 * @n: number of bytes to be changed
 * Return: pointer to the changed string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
