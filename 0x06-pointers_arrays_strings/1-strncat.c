#include "main.h"
#include <string.h>
/**
 *_strncat - concatenate two string but only specified characters
 *@n: maximum number of characters to be appended
 *@dest: the pointer to the destination
 *@src: the source of the characters to be appended
 *Return: the result of the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result;

	result = strncat(dest, src, n);

	return (result);
}
