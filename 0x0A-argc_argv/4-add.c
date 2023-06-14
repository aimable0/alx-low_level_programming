#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the arg count
 * @argv: the string arg
 * Return: 0 on success and 1 on fail
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else if (argc > 2)
	{
		for (i = 0; i < argc; i++)
		{
		result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}

	return (0);

}
