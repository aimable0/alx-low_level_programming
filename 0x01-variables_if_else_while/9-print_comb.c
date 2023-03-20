#include <stdio.h>
/**
 *main - a program that prints numbers with spaces and commas
 *Return: 0 (success)
 */
int main(void)
{
int i = 48;

for (i = 48; i <= 57; i++)
	{
	putchar(i);
if (i < 57)
putchar(',');
putchar(' ');
	}
return (0);
}
