#include "main.h"
#include <stdio.h>
/**
 *set_string - function that sets the value of a pointer to a char
 *@s: parameter to be checked
 *@to: parameter to be checked
 *Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
