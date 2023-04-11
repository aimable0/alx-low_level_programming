#include "main.h"

/**
 * _puts_recursion - it prints string using recursion
 *@s: is any character
 *Return: void on success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
		return;
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
