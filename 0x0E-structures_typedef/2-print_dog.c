#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the 'struct dog'
 * @d: the pointer to 'struct dog'
 * Return: NULL
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (NULL)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (NULL)\n");
	}
}
