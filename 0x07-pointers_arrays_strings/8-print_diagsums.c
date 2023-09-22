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
	int i;
	int primaryDiagonalSum = 0;
	int secondaryDiagonalSum = 0;

	for (i = 0; i < size; i++)
	{
		primaryDiagonalSum += a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		secondaryDiagonalSum += a[i * size + (size - 1 - i)];
	}
	printf("%d\n", primaryDiagonalSum);
	printf("%d\n", secondaryDiagonalSum);
}
