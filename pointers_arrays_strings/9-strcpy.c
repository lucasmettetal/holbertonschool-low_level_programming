#include "main.h"

/**
 * *_strcpy - converts a string to an integer
 * @dest: the buffer pointed
 * @src: the string
 * Return: the integer value of the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
