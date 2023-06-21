#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_dog - a function for printing with struct
 *@d: the struct name
 *Return: void
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		exit(98);

	if (d->name == NULL)
		printf("Name: (nil)\n");

	if (d->age == 0.00)
		printf("nil\n");

	if (d->owner == NULL)
		printf("nil\n");

	while (d != NULL)
	{
	printf("Name: %s\n", d->name = strdup(d->name));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner = strdup(d->owner));
	break;
	}

}
