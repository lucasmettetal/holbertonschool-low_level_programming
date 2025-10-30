#include "main.h"

/**
 * _strcmp - compares two strings lexicographically
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer less than, equal to, or greater than 0 if s1 is found,
 *         respectively, to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
