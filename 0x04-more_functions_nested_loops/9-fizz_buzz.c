#include <stdio.h>
/**
 *main - main function
 *Return: 0 on success
 */

int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}

	printf("%d", i);
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
