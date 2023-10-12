#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all -  function that returns the sum of all its parameters.
 *@n: parameter to be checked
 *@...: number of parameter to be calculated
 *Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;
	int num;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
	sum += num;
	}
	va_end(args);
	return (sum);
}
