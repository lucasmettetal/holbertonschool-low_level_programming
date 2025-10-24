#include 'main.h'

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *@n: list of natural number
 *Return: Always 0.
 */

void print_to_98(int n)
{

	if (n <= 98)
	{

		for (int i = n; i <= 98; i++)
		{

			_putchar(i + '0');

			if (i != 98)
			{

				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{

		for (int i = n; i >= 98; i--)
		{

			_putchar(i + '0');

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
