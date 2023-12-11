#include "main.h"
/**
 *_isalpha - function that check alphabetic
 *@c: parameter to be checked
 *Return: (1) and (0)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
