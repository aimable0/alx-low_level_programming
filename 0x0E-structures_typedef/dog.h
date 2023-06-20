#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - a an example of a struct
 * @name: given name
 * @age: given age
 * @owner: given owner
 *
 *how it works: it contains the classified info of the given user
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
}dog_t;

/*void init_dog(struct dog *d, char *name, float age, char *owner);*/
/*void print_dog(struct dog *d);*/
#endif
