#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - a function that prints
 *@sep: for separation
 *@n: an int
 * @...: more
 *Return: void
 */
void print_strings(const char *sep, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);

	if (i < n - 1 && sep != NULL)
		printf("%s", sep);
	}

	va_end(args);

	printf("\n");
}

