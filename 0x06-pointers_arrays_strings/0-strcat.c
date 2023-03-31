#include "main.h"
#include <string.h>
/**
 *_strcat - concatenate strings together
 *@dest: any string of characters
 *@src: any string of characters
 *Return: the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = strcat(dest, src);

	return (result);
}
