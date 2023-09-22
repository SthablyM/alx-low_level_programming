#include "main.h"
/**
 **_strchr -  function that locates a character in a string
 *@s: parameter to be checked
 *@c: paramete to be checked
 *Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
