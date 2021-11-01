#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creation of a new dog
 * @name: new name for the dog
 * @age: new age of a dog
 * @owner: new owner of a dog
 * Return: New dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int lenghtname = 0, lenghtowner = 0, i;
	dog_t *newdog;

	newdog = (dog_t *)malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	while (name[lenghtname++])
		;
	while (owner[lenghtowner++])
		;
	newdog->name = malloc(lenghtname * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; i <= lenghtname; i++)
		newdog->name[i] = name[i];
	newdog->age = age;
	newdog->owner = malloc(lenghtowner * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i <= lenghtowner; i++)
		newdog->owner[i] = owner[i];
	return (newdog);
}
