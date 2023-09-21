#include "main.h"
#include <stdio.h>
/**
 **string_toupper -  function that changes all lowercase letters
 *@n: parameter to be checked
 *Return: N
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 'a' + 'A';
		i++;
	}
	return (n);
}
