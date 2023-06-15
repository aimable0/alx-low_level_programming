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
	unsigned int i, j;
	char *concat;

	if (s1 != NULL)
        len1 = strlen(s1);

    if (s2 != NULL)
        len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    concat = malloc((len1 + n + 1) * sizeof(char));
    if (concat == NULL)
        return NULL;

    if (s1 != NULL)
    {
        for (i = 0; i < len1; i++)
            concat[i] = s1[i];
    }

    if (s2 != NULL)
    {
        for (j = 0; j < n; j++, i++)
            concat[i] = s2[j];
    }

    concat[i] = '\0';

    return concat;
}
