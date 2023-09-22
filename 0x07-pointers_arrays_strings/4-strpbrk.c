#include "main.h"
#include "main.h"
#include <stdio.h>
/**
 **_strpbrk -  function that searches a string for any of a set of bytes
 *@s: parameter to be checked
 *@accept: parameter to checked
 *Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *s1, *s2;

	for (s1 = s; *s1 != '\0'; s1++)
	{
		for (s2 = accept; *s2 != '\0'; s2++)
		{
			if (*s1 == *s2)
			{
				return (s1);
			}
		}
	}
	return (NULL);
}
