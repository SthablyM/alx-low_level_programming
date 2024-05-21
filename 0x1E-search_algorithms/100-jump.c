#include "search_algos.h"
#include <math.h>
/**
 *jump_search - function that searches for a value in a sorted array
 *@array: a pointer
 *@size:  is the number of elements in array
 *@value: the value to search for
 *Return: -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev, next, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	jump = sqrt(size);
	prev = 0;
	next = jump;
	while (next < size && array[next - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", next - 1, array[next - 1]);
		prev = next;
		next += jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, next);
	for (i = prev; i < size && i < next; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
