#include <stdio.h>
/**
 *main - printing alphabets but e and q
 *Return: 0 (success)
 */
int main(void)
{
char al = 'a';

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al == 'e')
			continue;
		if (al == 'q')
			continue;
	putchar(al);
	}
	putchar('\n');

return (0);

}
