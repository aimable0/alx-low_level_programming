#include "main.h"
#include <stdlib.h>
/**
 * create_array - is function Write a function that creates an array of chars.
 * @size: to be used to calculate bytes
 * @c:specific char to be initialized wit
 * Return: pointer to array on success or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
