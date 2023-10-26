#include "main.h"
#include <stdio.h>
/**
 *get_endianness - function that check the endianness
 *
 *Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr;

	byte_ptr = (unsigned char *)&num;
	if (*byte_ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
