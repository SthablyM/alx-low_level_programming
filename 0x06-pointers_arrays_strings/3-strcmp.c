#include "main.h"
/**
 * _strcmp - main function
 *@s1: parameter to be checked
 *@s2: parameter ti be checked
 *Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		return (*s1 - *s2);
	}
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
