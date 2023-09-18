#include "main.h"
#include <stdio.h>
/**
 *print_array - function that print array elements
 *@a: parameter to be printed
 *@n: parameter length of the array
 *Return: void
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k < n - 1)
			printf(", ");
	}
	printf("\n");
}
