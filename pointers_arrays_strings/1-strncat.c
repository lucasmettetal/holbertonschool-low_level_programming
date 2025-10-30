#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: the buffer pointed
 * @src: the string
 * @n: nombre of letter to prints
 * Return: the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
