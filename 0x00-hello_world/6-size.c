#include <stdio.h>
/**
 *main - aprogram that prints out the size of data types
 *Return: 0 (Sucess)
 */
int main(void)
{
	int mynum;
	float myfloat;
	char mychar;

	printf("%lu\n", sizeof(mychar));
	printf("%lu\n", sizeof(myfloat));
	printf("%lu\n", sizeof(mynum));
	return (0);
}
