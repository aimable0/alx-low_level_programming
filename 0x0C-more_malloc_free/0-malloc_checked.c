#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: usigned int ,that has the number of int bytes needed
 * Return: 0 on success and 1 on fail
 */
void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	else
	{
		return (str);
	}

}
