#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings, allocating memory
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 * Return: pointer to the newly allocated concatenated string
 * or NULL if memory allocation fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *new_str;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		len2 = n;

	new_str = malloc(len1 + len2 + 1);
	if (!new_str)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (i = 0; i < len2; i++)
		new_str[len1 + i] = s2[i];
	new_str[len1 + len2] = '\0';

	return (new_str);
}
