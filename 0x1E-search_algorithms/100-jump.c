#include "search_algos.h"
#include <math.h>
/**
 *jump_search - function that searches for a value in a sorted array 
 *@array: a ponter
 *@size:the number of elements in array
 *@value:  the value to search for
 *Return: -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t jump;
	size_t prev;
	size_t next;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	jump = sqrt(size);
	prev = 0;
	next = jump;
	do {
		printf ("Value found between indexes[%d] = [%d]\n", size, array[size]);
	while (next < size && array[next - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", next - 1, array[next - 1]);
		prev = next;
		next += jump;
	}
	for (i = prev; i < next && i < next; ++i)
	{
		printf("Value checked array[%ld]  = [%d]\n ", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
