#include "main.h"
/**
 *print_sign - a function that checks for the sign
 *@n: any intiger
 *Return: 0 success
 */
int print_sign(int n)
{
	if (n > 0)
		{
		putchar(43);
		return (1);
		}
	else if (n < 0)
		{
		putchar(45);
		return (-1);
		}
	else
		{
		putchar(0);
		return (48);
		}
	putchar('\n');

}
