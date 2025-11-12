#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array, or NULL on failure
 *
 */

int *array_range(int min, int max)
{
	int i, length;
	int *arr;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;

	arr = malloc(length * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		arr[i] = min + i;
	return (arr);
}
