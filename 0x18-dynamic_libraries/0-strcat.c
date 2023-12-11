#include "main.h"
/**
 **_strcat -  function that concatenates two strings
 *@dest: parameter to be checked
 *@src: parameter to be checked
 *Return: desti
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*s != '\0')
		s++;

	while (*src != '\0')
	{
		*s = *src;
		s++;
		src++;
	}
	*s = '\0';
	return (dest);
}
