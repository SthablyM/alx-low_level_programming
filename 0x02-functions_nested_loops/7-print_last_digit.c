#include "main.h"
/**
 *print_last_digit - function that prints the last digit of a number
 *@n: parameter to be checked
 *Return: (value)
 */
int print_last_digit(int n)
{
	int value;

	if (n > 0)
	{
		value = (n % 10);
			_putchar(value);
	}
	if (n < 0)
	{
		value = (-1);
			_putchar(value + '0');
	}
	return (value);
}
