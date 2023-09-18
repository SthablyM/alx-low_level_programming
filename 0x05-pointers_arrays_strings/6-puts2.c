#include "main.h"
/**
 *puts2 - function that every other char of a string
 *@str: parameter to be checked
 *Return: void
 */
void puts2(char *str)
{
	int count = 0, i, k;

	for (k = 0 ; str[k] != '\0' ; k++)
		count++;

	i = 0;
	while (i < count)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');

}
