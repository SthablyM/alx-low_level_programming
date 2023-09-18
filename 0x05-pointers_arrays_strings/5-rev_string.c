#include "main.h"
/**
 *rev_string - function that reverse a string
 *@s: parameter to be checked
 *Return: void
 */
void rev_string(char *s)
{
	int count = 0, k, i;
	char ch;

	for (k = 0 ; s[k] != '\0' ; k++)
		count++;
	i = 0;
	while (i < count--)
	{
		ch = s[i];
		s[i++] = s[count];
		s[count] = ch;
	}
}
