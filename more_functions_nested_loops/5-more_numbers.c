#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, 10 time
 * Return: 0
 */

void more_numbers(void)
{
	int count = 0;
	char num;

	while (count < 10)

	{
		num = '0';

		while (num <= '14')
		{
			_putchar(num);
			num++;
		}
		_putchar('\n');
		count++;
	}
}
