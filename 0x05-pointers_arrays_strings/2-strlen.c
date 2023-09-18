#include "main.h"
/**
 *_strlen - function that returns the length of a string
 *@s: parameter to checked
 *Return: count
 */
int _strlen(char *s)
{
	int k;
	int count = 0;

	for (k = 0 ; s[k] != '\0'; k++)
		count++;
	return (count);
}
