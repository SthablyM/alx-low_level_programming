#include "main.h"
/**
 *print_array - function that print array elements
 *@dest: A pointer to destination of string
 *@src: A pointer to source string to copy from
 *Return: void
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
