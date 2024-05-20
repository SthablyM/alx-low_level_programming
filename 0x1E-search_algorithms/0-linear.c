#include "search_algos.h"
#include <stdio.h>
/**
 *linear_search - function that searvh for a value in array
 *@array: a pointer
 *@size: is the number of elements in array
 *@value: is the value to search for
 *Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < (int)size; i++)
	{	printf("Value checked array[[%u] = %d\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
