#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts an array into intigers
 * @s: array of type char
 * Return: int on success.
 */

int _atoi(char *s)
{
	int result = 0, sign = 1, i, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		break;
	}
	if (s[i - 1] == '-')
	{
		sign = -1;
	}
	else if (s[len - 1] == '+')
	{
		sign = 1;
	}
	else
	{
		sign = 1;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
	if (result > (2147483647 - (s[i] - '0')) / 10)
	{
	if (sign == 1)
		return (2147483647);
	else if (sign == -1)
		return (-2147483648);
	}
	result = result * 10 + (s[i] - '0');
	i++;
	}
	return (result * sign);
}
