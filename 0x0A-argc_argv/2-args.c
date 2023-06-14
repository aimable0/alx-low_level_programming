#include <stdio.h>
/**
 *main - the main function
 *@argc: argument count
 *@argv: the argument string
 *Return: 0 on succes and 1 on fail
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
