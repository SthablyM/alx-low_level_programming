#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings -  function that prints strings, followed by a new line.
 *@separator: the string to be printed between the strings
 *@n: the number of strings passed to the function
 *@...: vairiable to be printed
 *Description: If one of the string is NULL, print (nil) instead
 *Print a new line at the end of your function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");


}
