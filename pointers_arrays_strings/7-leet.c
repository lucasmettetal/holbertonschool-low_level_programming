#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be changed
 * Return: pointer to the changed string
 */

char *leet(char *)
{
	int i, j;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replace[j];
			}
		}
	}
	return (str);
}
