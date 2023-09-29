#include "main.h"
/**
 **_strncpy - main function
 *@dest: parameter to be checked
 *@src: parameter to be checked
 *@n: parameter to checked
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s = dest;

	while (*src != '\0' && n > 0)
	{
		*s++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*s++ = '\0';
		n--;
	}
	return (dest);
}
