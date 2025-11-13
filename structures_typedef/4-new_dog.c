#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, ln = 0, lo = 0;

	if (!name || !owner)
		return (NULL);
	while (name[ln])
		ln++;
	while (owner[lo])
		lo++;
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = malloc(ln + 1);
	if (!d->name)
		return (free(d), NULL);
	d->owner = malloc(lo + 1);
	if (!d->owner)
		return (free(d->name), free(d), NULL);
	for (i = 0; i < ln; i++)
		d->name[i] = name[i];
	d->name[ln] = '\0';
	for (i = 0; i < lo; i++)
		d->owner[i] = owner[i];
	d->owner[lo] = '\0';
	d->age = age;
	return (d);
}
