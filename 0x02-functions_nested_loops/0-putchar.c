#include <stdio.h>
/**
 *main - a program that prints _putchar
 *Return: 0  (success)
 */
int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');

	return (0);

}
