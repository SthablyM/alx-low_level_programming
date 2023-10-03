#include "main.h"
#include <stdlib.h>
/**
 *str_concat - function that concatenates two strings
 *@s1: first string to be checked
 *@s2: second string to be checcked
 *Return:  NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	result = malloc(sizeof(char) * (i + j + 1));

	if (result == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++, j++;
	}
	result[i] = '\0';
	return (result);
}
