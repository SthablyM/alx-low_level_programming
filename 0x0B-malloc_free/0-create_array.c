#include "main.h"
#include <stdlib.h>
/**
 *create_array -  function that creates an array of chars
 *@size: the size of memory to print
 *@c: the address of memory to print
 *Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *charArray = (char *)malloc(size * sizeof(char));

	if (size == 0 || charArray == NULL)
		return (NULL);

	for  (i = 0; i < size; i++)
		charArray[i] = c;
	return (charArray);
}
