#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n : The character to check
 * Return: 0
 */

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)

	{

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
}
