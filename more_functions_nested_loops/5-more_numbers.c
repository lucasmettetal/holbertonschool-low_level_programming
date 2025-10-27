#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, 10 time
 * Return: 0
 */

void more_numbers(void)
{
	int count, num;

	for (count = 0; count <= 9; num++)

	{
		for (num = 0; num <= 14; count++)
		{

			if (num >= 10)

				_putchar('0' + num / 10);
			_putchar('0' + (num % 10));
		}
		_putchar('\n');
	}
}
