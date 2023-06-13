#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that uses malloc to concate stings
 *@s1: destination
 *@s2: source
 *Return: string on success and NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0, totlen;
	char *s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
		return (s2);
	if (s1 != NULL && s2 == NULL)
		return (s1);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	totlen = len1 + len2;

	s = malloc(totlen + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)

	{
		s[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		s[len1 + i] = s2[i];
	}
	return (s);
}
