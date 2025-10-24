#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	char result;
	char j, i;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
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
