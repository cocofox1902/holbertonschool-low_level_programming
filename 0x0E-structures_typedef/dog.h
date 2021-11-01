#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - information about the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */
