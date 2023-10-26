#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *get_bit - function that return value of a bit
 *@n: value of the unsigned long int
 *@index:  index of the bit
 *Return: the value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	bit_value = (n & mask) != 0;
	return (bit_value);
}
