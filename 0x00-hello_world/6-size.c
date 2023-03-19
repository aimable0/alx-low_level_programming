#include <stdio.h>
/**
 *main - a program that prints out the size of data types
 *Return: 0 (Sucess)
 */
int main(void)
{
	char mychar;
	int myint;
	long int myLongint;
	long long int myllongint;
	float myFloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(mychar));
	printf("Size of an int: %lu byte(s)\n", sizeof(myint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(myLongint));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(myllongint));
	printf("Size of a float: %lu byte(s)\n", sizeof(myFloat));
	return (0);
}
