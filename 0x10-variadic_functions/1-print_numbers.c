#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: separates
 * @g: an int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int g, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, g);

	for (i = 0; i < g; i++)
	{
	num = va_arg(args, int);
	printf("%d", num);

	if (separator != NULL && i < g - 1)
	printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}

