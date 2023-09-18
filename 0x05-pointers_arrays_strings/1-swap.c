#include "main.h"
/**
 *swap_int - function that swaps the values of two integers
 *@a: interger to swap
 *@b: interger to swap
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
