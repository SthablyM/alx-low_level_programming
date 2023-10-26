#include "main.h"
#include <stdio.h>
/**
 *flip_bits - function that return  number of bits
 *@n: parameter to be checked
 *@m: second parameter to be checked
 *Return:0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);

}
