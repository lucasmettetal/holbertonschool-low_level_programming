#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be changed
 * Return: pointer to the changed string
 */

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - ('a' - 'A');
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
				str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
				str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
				str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
				str[i - 1] == '}')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
	}

	return (str);
}