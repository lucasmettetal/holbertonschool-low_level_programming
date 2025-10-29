#include "main.h"

/**
 * *_strcpy - converts a string to an integer
 * @dest: pointer to the string to be converted
 * @src:
 * Return: the integer value of the string
 */

char *_strcpy(char *dest, char *src)
{
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
