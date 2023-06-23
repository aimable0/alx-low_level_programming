#include <stdarg.h>
/**
 *sum_them_all - sums all functions
 *@d: an int
 *@...: others
 *Return: sum on success
 */

int sum_them_all(const unsigned int d, ...)
{
	va_list args;
	int sum = 0;
	unsigned int m;

	if (d == 0)
	return (0);

	va_start(args, d);

	for (m = 0; m < d; m++)
	sum += va_arg(args, int);

	va_end(args);

	return (sum);
}

