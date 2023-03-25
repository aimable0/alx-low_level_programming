#include "main.h"
/**
 *print_most_numbers - prints natural numbers but 2 and 4
 *Return: void (it doesn't return any value.)
 */
void print_most_numbers(void)
{
int a;

	for (a = 48; a < 58; a++)
	{
		if (a == 50 || a == 52)
			continue;
	_putchar(a);
	}
	_putchar('\n');

}
