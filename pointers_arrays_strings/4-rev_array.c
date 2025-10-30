#include "main.h"

/**
 * _strcmp - function that reverses the content of an array of integers.
 * @a: the array
 * @n: the content
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int temp[n];

	for (int i = 0; i < n; i++)
		temp[i] = a[n - i - 1];

	for (int i = 0; i < n; i++)
		a[i] = temp[i];
}
