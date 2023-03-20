#include <stdio.h>
/**
 *main - a program that prints out alphabets in lower and capital case
 *Return: 0 (success)
 */
int main(void)
{
char b = 'a';
char c = 'A';

	for (b = 'a'; b <= 'z'; b++)
		putchar(b);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

return (0);

}
