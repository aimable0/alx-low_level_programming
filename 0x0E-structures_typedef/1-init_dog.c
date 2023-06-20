#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - a function that initializes a variablee of type
 * @d: struct name
 * @name: a given name
 * @age: a given age
 * @owner: a given owner name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
