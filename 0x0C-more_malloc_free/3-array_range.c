#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **array_range -  function that creates an array of integers.
 *@min: minimum range
 *@max: maximum range
 *Return: NULL
 */
int *array_range(int min, int max)
{
	int i = 0, size, *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	arr = (int *)malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
