#include "main.h"
/**
 **_strstr -  function that locates a substring
 *@haystack: parameter to be checked
 *@needle: parameter to be checked
 *Return: substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

	while (*n != '\0' && *h == *n)
	{
	h++;
	n++;
	}
	if (*n == '\0')
	{
	return (haystack);
	}
	haystack++;
	}
	return (NULL);
}
