#include <stdio.h>
/**
 *main - a program that prints out numbers of base 16
 *Return: 0 (success)
 */
int main(void)
{
int b = 48;
char c = 'a';

	for (b = 48; b <= 57; b++)
		putchar(b);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

return (0);
}
