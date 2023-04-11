#include "main.h"

/**
 *factorial - prints factorial of a given number
 *@n: any intiger number
 *Return: intiger on success
 */
int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
