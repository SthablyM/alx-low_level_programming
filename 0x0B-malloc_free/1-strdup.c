#include "main.h"
#include <stdlib.h>
/**
 *_strdup -  function that concatenates two strings
 *@str: string to be checked
 *Return:pointer if success or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		ptr[j] = str[j];

	return (ptr);
}
