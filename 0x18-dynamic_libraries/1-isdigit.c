 #include "main.h"
/**
 *_isdigit - function that checks for a digit
 *@c: parameter to checked
 *Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
