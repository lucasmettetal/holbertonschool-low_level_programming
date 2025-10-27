#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle using '#'
 * @size: size (height and base) of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j, a;

	if (size <= 0)
	{

		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (a = 1; a <= i; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
