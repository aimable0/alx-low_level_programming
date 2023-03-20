#include <stdio.h>
#include <string.h>
/**
 *main - printing alphabets
 *Return: 0 (success)
 */
int main(void)
{
char alph[] = "abcdefghijklmnopqrstuvwxyz\n";
int i = 0;

for (i = 0; i < 26; i++)
putchar(alph[i]);

return (0);

}
