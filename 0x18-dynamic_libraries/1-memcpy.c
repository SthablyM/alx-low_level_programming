#include "main.h"
/**
 **_memcpy - function that copies memory area
 *@dest: parameter to be checked
 *@src: parameter to be checked
 *@n: parameter to be checked
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (original_dest);
}
