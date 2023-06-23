#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - prints all
 *@const_format: xyz
 *@...:more others
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char ch_f;

	va_start(args, format);

	while (format && format[i])
	{
	ch_f = format[i];

	if (i > 0)
	printf(", ");

	switch (ch_f)
	{
	case 'c':
		printf("%c", va_arg(args, int));
		break;
	case 'i':
		printf("%d", va_arg(args, int));
		break;
	case 'f':
		printf("%f", va_arg(args, double));
		break;
	case 's':
		str = va_arg(args, char *);
		if (str == NULL)
		str = "(nil)";
		printf("%s", str);
		break;
		default:
		i++;
		continue;
	}

		i++;
	}

	va_end(args);

	printf("\n");
}

