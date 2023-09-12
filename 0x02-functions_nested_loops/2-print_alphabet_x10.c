#include "main.h"
/**
 *print_alphabet_x10 -  function that prints 10 times the alphabet
 *
 *Return: Always (0)
 */
void print_alphabet_x10(void)
{
	int s;
	char k;

	for (s = 0 ; s < 10 ; s++)
	{
		for (k = 'a' ; k <= 'z' ; k++)
			_putchar(k);
	}

	_putchar('\n');
}
