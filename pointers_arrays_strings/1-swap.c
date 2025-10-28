#include "main.h"

/**
 * swap_int - swap value of a and b
 * @a: value 1
 * @b: value 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *b;
	*b = *a;
	*a = temp;
}
