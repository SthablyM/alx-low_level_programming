#include "main.h"
/**
 * _pow_recursion -  function that returns the values
 *@x: string to checked
 *@y: string to be checked
 *Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
