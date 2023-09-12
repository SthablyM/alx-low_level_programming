#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 *@k: parmeter to be checked
 *Return: Always (0)
 */
int _abs(int k)
{

	if (k < 0)
		return (-k);
	else if (k >= 0)
	{
		return (k);
	}
	return (0);
}
