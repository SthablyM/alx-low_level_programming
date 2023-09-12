#include "main.h"
/**
 *print_sign - function that prints the sign of a number
 *@n: parameter to be checked
 *Return: (1) or (0) 0r (-1)
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		result =  -1;
	}
	return (result);
}
