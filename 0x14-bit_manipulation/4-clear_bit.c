#include "main.h"
#include <stdio.h>
/**
 *clear_bit - function that sets the value of thr bit
 *@n: pointer
 *@index: the index of the bit
 *Return: 1 if it worked or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n &= ~mask;
	return (1);
}
