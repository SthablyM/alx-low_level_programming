#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 *binary_to_uint -  function that converts a binary number to an unsigned int
 *@b: is a pointing to a string
 *Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int i = 0;
	int j;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
		{
			result += base;
		}
		base *= 2;
	}
	return (result);

}
