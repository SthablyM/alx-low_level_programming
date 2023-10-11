#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index -  function that searches for an integer.
 *@array: array
 *@size: size of the element
 *@cmp: pointer
 *Return: -1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = -1;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (++i < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
