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
	char *str;
	unsigned int i, m, len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str = malloc((len1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (m = 0; m < n; m++)
		str[m + i] = s2[m];

	str[len1 + n + 1] = '\0';

	return (str);
}
