#include "main.h"
#include <stdio.h>
/**
 *print_diagsums -  function that prints the sum of the two diagonals
 *@a:  parameter to be checked
 *@size: parameter to be checked
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, r;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i <= (size * size); i = i +size + 1)
	{
		sum1 = sum1 + a[i];
	}
	for (r = size -1; r <= (size * size)-size; r = r + size - 1)
	{
		sum2 = sum2 + a[r];
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
