#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of intigers
 * @min: staring value
 * @max: ending value
 * Return: pointer to an array of intigers on succes and NULL on fail
 */
int *array_range(int min, int max)
{
	int i, totnum, j = 0;

	int *num;

	if (min > max)
		return (NULL);

	totnum = (max - min) + 1;

	num = malloc(totnum * sizeof(int));
	if (num == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
		num[j] = i;

	return (num);
}
