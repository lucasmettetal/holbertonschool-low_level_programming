#include "main.h"

/**
 * _strpbrk - locates a character in a string
 * @s: string to search
 * @accept: string containing accepted characters
 * Return: pointer to first occurrence in s of any byte from accept,
 *         or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (s[count] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[count] == accept[i])
			{
				return (s + count);
			}
		}

		count++;
	}
	return (0);
}
