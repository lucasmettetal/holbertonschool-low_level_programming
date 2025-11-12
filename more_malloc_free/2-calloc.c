#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i, total;
	void *ptr;
	unsigned char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = (size_t)*nmemb(size_t) * size;
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	p = (unsigned char *)ptr;
	for (i = 0; i < total; i++)

		p[i] = 0;

	return (ptr);
}
