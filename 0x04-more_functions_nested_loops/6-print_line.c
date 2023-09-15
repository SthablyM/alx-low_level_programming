#include "main.h"
/**
 *print_line -  function that draws a straight line
 *@n: parameter to be checked
 *Return: void
 */
void print_line(int n)
{

	if (n <= 0)
		_putchar('\n');
	else
	{
		int j;

		for (j = 1 ; j <= n ; j++)
			_putchar('_');
		_putchar('\n');
	}

}
