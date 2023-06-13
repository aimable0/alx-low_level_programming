#include "main.h"
/**
 * create_array - is function Write a function that creates an array of chars.
 * @size: to be used to calculate bytes
 * @c:specific char to be initialized wit
 * Return: pointer to array on success or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;

	if (size > 0)
	{
	char *arr = malloc(size * sizeof(char));
	/*alterantive*/
	/*for (int i = 0; i < size; i++) a[i] = c;*/
		while (i < size)
		{
		arr[i] = c;
		i++;
		}
		return (arr);
	}
	else if (size <= 0)
	return ('\0');
}
