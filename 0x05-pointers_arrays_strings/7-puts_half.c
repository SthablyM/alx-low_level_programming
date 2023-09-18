#include "main.h"
/**
 *puts_half - function that print half of a string
 *@str: parameter to be checked
 *Return: void
 */
void puts_half(char *str)
{
	int count = 0, i, k;

	for (k = 0 ; str[k] != '\0' ; k++)
		count++;

	if (count % 2 != 0)
		i = (count + 1) / 2;
	else
		i = (count / 2);

	while (i <i count)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
