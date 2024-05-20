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
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{	printf("Value checked array[%ld] = %d\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
