#include "main.h"

/**
 * _strlen - print the lenghr of a string
 * @s: the string
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
