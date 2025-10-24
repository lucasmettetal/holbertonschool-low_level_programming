#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int result;
	int j, i;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			result = i * j;
			if (result >= 10)
			{
				putchar((result / 10) + '0');
				putchar((result % 10) + '0');
			}
			else
			{
				putchar(result + '0');
			}

			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}

	return (0);
}
