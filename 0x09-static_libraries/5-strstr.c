#include "main.h"
/**
 **_strstr -  function that locates a substring
 *@haystack: parameter to be checked
 *@needle: parameter to be checked
 *Return: substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (*haystack != '\0'; haystack++)
	{
	while ((*haystack = *needle) && *needle != '\0')
	{
		haystack++;
		needle++;
	}
	if (*needle == '\0')
		return (haystack);
	}
	return (0);
}
