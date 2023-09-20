#include "main.h"
/**
 **_strcat -  function that concatenates two strings
 *@dest: parameter to be checked
 *@src: parameter to be checked
 *Return: desti
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
		dest_ptr++;
	{
	while (*src != '\0')
		*dest_ptr  = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
