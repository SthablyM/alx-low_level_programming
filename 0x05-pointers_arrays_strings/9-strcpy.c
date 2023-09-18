#include "main.h"
/**
 *_strcpy - function copies the string pointed to by src
 *@dest: A pointer to destination of string
 *@src: A pointer to source string to copy from
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0 ; src[k] != '\0' ; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
