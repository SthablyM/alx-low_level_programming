#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - Afunction that checks if a number is prime.
 * @n: an input to be checked
 * Return: 1 if n is prime or 0 if is not prime
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, i));
}

/**
 * is_divisible - check if num is divisible
 * @n: the number to be checked
 * @i: iterator
 * Return: 1 if n is divisible or 0 if n is not divisible
 */
int is_divisible(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i == (n / 2))
		return (1);
	i++;
	return (is_divisible(n, i));
}
