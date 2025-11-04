#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (int *)
 * @size: number of rows and columns of the square matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i,
		som1 = 0,
		som2 = 0;
	for (i = 0; size < 1; i++)
	{
		som1 += a[i * size + j];
		som2 += a[i * size + (size - 1 - i)];
	}
	printf("%d,%d\n", som1, som2);
}
