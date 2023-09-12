#include "main.h"
/**
 *print_last_digit - function that prints the last digit of a number
 *@n: parameter to be checked
 *Return: (value)
 */
int print_last_digit(int n)
{
	int value;

	value = (n % 10);
	if (n < 0)
	{
		value = -value;
		_putchar(value + '0');
	}
	return (value);

}
