#include "main.h"

/**
 * _strncpy - function to copy the contents of one string into another
 * @dest: the buffer pointed
 * @src: the string
 * @n: nombre of letter to prints
 * Return: the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
