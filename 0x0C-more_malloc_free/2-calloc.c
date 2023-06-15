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
	char *mem;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	mem[nmemb * size] = '\0';

	while(mem[i] != '\0')
		mem[i] = 0;

	return (mem);
}
