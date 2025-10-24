#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int result;
	int j, i;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			result = i * j;
			_putchar(result);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
