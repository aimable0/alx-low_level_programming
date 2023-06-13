#include "main.h"
#include <stdlib.h>
/**
 *_strdup - a function thatthat returns a pointer to a newly allocated
 *@str: the string to be copied
 *Return: pointer to duplicated string, and NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *st;

	while (str[len] != '\0')
	{
		len++;
	}
	st = malloc(len);

	if (st == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		st[i] = str[i];

	return (st);
}
