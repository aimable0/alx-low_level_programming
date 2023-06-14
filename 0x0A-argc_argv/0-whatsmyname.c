#include <stdio.h>
/**
 * main - the main function of the prog
 * @argc: command line argument, parameter for argument count
 * @argv: command line argument, parameter for the argument
 * Return: 0 on success and 1 on failure
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);
	printf("\n");

	return (0);
}
