#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - a function that allocates memeory of array using malloc
 * @nmemb: elements
 * @size: bytes for a single element
 * Return: pointer to memory address pn success. (NULL) on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_arr;
	unsigned int m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_arr = malloc(nmemb * size);

	if (mem_arr == NULL)
		return (NULL);

	for (m = 0; m < nmemb; m++)
		mem_arr[m] = 0;

	return (mem_arr);
}
