#include <stdio.h>

/**
 * main - the main function of the program.
 * @argc: the argument count of those passed to main.
 * @argv: the string argument passed to main function.
 * Return: 0 on succes and 1 on fail
 */

int main(int argc, char *argv[])
{
	while (argv)
	{
		printf("%d\n", (argc - 1));
		break;
	}

	return (0);
}
