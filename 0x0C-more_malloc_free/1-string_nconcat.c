#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a funtion that concatenate strings.
 * @s1: the string1 (taken as a whole)
 * @s2: the string2
 * @n: number of character to be added to the s1
 * Return: 0 on success and 1 on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = malloc(sizeof(s1) + n);
	unsigned int i;
	unsigned int len1 = 0, len2 = 0;

	if (str == NULL)
		return (NULL);

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	if (s2 == NULL)
		return (str);

	if (n == len2 || n > len2)
	{
		for (i = 0; i <= len2; i++)
		{
		str[len1 + i] = s2[i];
		}
	}

	for (i = 0; i < n; i++)
		str[len1 + i] = s2[i];
	str[len1 + n + 1] = '\0';

	return (str);
}
