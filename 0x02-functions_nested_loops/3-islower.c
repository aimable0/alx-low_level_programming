#include "main.h"
/**
 *_islower - checks for lowercase character
 *@c: is any character
 *Return: 0 success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* c is lowercase*/
	}
	else
	{
		return (0);  /*c is not lowercase*/
	}
}
