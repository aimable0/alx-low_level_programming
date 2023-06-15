#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	unsigned int len1 = 0, len2 = 0;
	unsigned int m, j;
	char *c_st;

	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	c_st = malloc((len1 + n + 1) * sizeof(char));
	if (c_st == NULL)
		return (NULL);

	for (m = 0; m < len1; m++)
		c_st[m] = s1[m];

	for (j = 0; j < n; j++, m++)
		c_st[m] = s2[j];

	c_st[m] = '\0';

	return (c_st);
}
