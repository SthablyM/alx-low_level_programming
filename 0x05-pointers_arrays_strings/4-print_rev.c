#include "main.h"
/**
 *print_rev - function that prints a string, in reverse
 *@s: parameter to be checked
 *Return: void
 */
void print_rev(char *s)
{
	int k;
	int count = 0;

	for (k = 0 ; s[k] != '\0' ; k++)
		count++;

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
}
