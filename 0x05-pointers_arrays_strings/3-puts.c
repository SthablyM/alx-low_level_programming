#include "main.h"
/**
 *_puts -  function that prints a string
 *@str: paramete to be checked
 *Return: void
 */
void _puts(char *str)
{
	int k;

	for (k = 0 ; str[k] != '\0' ; k++)
		_putchar(str[k]);
	_putchar('\n');
}
