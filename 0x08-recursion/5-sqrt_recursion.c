#include "main.h"
int _compute_sqrt(int n, int i);

/**
 *_sqrt_recursion - function that returns the natural square root
 *@n: parameter to be checked
 *Return: The square root of n
*/
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	else
		return (_compute_sqrt(n, i));
}

/**
 *_compute_sqrt - compute square root of number n
 *@i: iterator
 *@n: number to find root value
 *Return: the square root of n
 */
int _compute_sqrt(int n, int i)
{
	if (i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	i++;
	return (_compute_sqrt(n, i));
}
