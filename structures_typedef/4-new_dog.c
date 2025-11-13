#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i, nameLen = 0, ownerLen = 0;

	while (name[nameLen] != '\0')
		nameLen++;
	while (owner[ownerLen] != '\0')
		ownerLen++;
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(nameLen + 1);
	if (newDog->name == NULL)
		free(newDog);
	return (NULL);
	newDog->owner = malloc(ownerLen + 1);
	if (newDog->owner == NULL)
		free(newDog->name);
	free(newDog);
	for (i = 0; i < nameLen; i++)
		newDog->name[i] = name[i];
	newDog->name[nameLen] = '\0';
	newDog->age = age;
	for (i = 0; i < ownerLen; i++)
		newDog->owner[i] = owner[i];
	newDog->owner[ownerLen] = '\0';
	return (newDog);
}
