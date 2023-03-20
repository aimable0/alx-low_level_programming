#include <stdio.h>
/**
 *main - a program that prints the alphabet in lower case
 *Return: 0 always (success)
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	return (0);

}
