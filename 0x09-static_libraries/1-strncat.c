#include "main.h"
/**
  *_strncat - main function
  *@dest: paremeter to be checked
  *@src: parsmeter to be checked
  *@n: parameter to be checked
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;

	while (*s != '\0')
		s++;
	while (*src != '\0' && n > 0)
	{
		*s = *src;
		s++;
		src++;
		n--;
	}
	*s = '\0';
	return (dest);
}
