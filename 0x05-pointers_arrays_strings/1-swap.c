#include "main.h"
/**
 *swap_int - swaps the values of two intigers
 *@a: any intiger
 *@b: any intiger
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int c = 0;
	int *old_a = &c;
	*old_a = *a;

	*a = *b;
	*b = *old_a;
}
